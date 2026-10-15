#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABJGLPCOMMK;
class JJHJCIAPADP;
class NKAEOPAAJLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJHJCIAPADP_ALKAKAIAKBL_OFFSET UNITYSDK_OFFSET(0x1E72E630)
#define JJHJCIAPADP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72ECD0)
#define JJHJCIAPADP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72F000)
#define JJHJCIAPADP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72E500)
#define JJHJCIAPADP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72E420)
#define JJHJCIAPADP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E410)
#define JJHJCIAPADP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72E8C0)
#define JJHJCIAPADP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72E670)
#define JJHJCIAPADP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72EAF0)
#define JJHJCIAPADP_IFLPMJJPLBP_OFFSET UNITYSDK_OFFSET(0x1E72E640)
#define JJHJCIAPADP_IHAIHNKHCBE_OFFSET UNITYSDK_OFFSET(0x1E72E650)
#define JJHJCIAPADP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72E3A0)
#define JJHJCIAPADP_LNKDJCJKMHB_OFFSET UNITYSDK_OFFSET(0x1E72E660)
#define JJHJCIAPADP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72EE50)
#define JJHJCIAPADP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72ED60)
#define JJHJCIAPADP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72E400)
#define JJHJCIAPADP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72EBF0)
#define JJHJCIAPADP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72EC50)

inline static constexpr unsigned int JJHJCIAPADP_TypeDefinitionIndex = 25527;

	class JJHJCIAPADP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NKAEOPAAJLG* BIHAPBIFHKH; // 0x18
		::ABJGLPCOMMK* LBNBPBMEFNK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JJHJCIAPADP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJHJCIAPADP*>**)UnitySDK::FromName("", "JJHJCIAPADP")->GetStaticField(0x628D0);
		}

		// static const ::System::Object AKGIJAMHACL; // 0x0
		// static const ::System::Object NLGDCHDEJFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJHJCIAPADP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJHJCIAPADP*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJHJCIAPADP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJHJCIAPADP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJHJCIAPADP*>*(*)())((::PBYTE)hIl2Cpp + JJHJCIAPADP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJHJCIAPADP* Clone()
		{
			return ((::JJHJCIAPADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_CLONE_OFFSET))(this);
		}

		::ABJGLPCOMMK* ALKAKAIAKBL()
		{
			return ((::ABJGLPCOMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_ALKAKAIAKBL_OFFSET))(this);
		}

		::System::Void IFLPMJJPLBP(::ABJGLPCOMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABJGLPCOMMK*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_IFLPMJJPLBP_OFFSET))(this, a1);
		}

		::NKAEOPAAJLG* IHAIHNKHCBE()
		{
			return ((::NKAEOPAAJLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_IHAIHNKHCBE_OFFSET))(this);
		}

		::System::Void LNKDJCJKMHB(::NKAEOPAAJLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKAEOPAAJLG*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_LNKDJCJKMHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJHJCIAPADP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJHJCIAPADP*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJHJCIAPADP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJHJCIAPADP*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJHJCIAPADP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
