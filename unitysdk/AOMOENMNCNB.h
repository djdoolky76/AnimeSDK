#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOMOENMNCNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOMOENMNCNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E642B90)
#define AOMOENMNCNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E642DB0)
#define AOMOENMNCNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E642780)
#define AOMOENMNCNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E642750)
#define AOMOENMNCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642740)
#define AOMOENMNCNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E642910)
#define AOMOENMNCNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E642810)
#define AOMOENMNCNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E642A80)
#define AOMOENMNCNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6426D0)
#define AOMOENMNCNB_LFCNIGAHPOL_OFFSET UNITYSDK_OFFSET(0x1E642800)
#define AOMOENMNCNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E642C50)
#define AOMOENMNCNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E642C20)
#define AOMOENMNCNB_OCNBDFIIKIB_OFFSET UNITYSDK_OFFSET(0x1E6427F0)
#define AOMOENMNCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E642730)
#define AOMOENMNCNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E642AB0)
#define AOMOENMNCNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E642B10)

inline static constexpr unsigned int AOMOENMNCNB_TypeDefinitionIndex = 32904;

	class AOMOENMNCNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDIHDHBBONA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AOMOENMNCNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOMOENMNCNB*>**)UnitySDK::FromName("", "AOMOENMNCNB")->GetStaticField(0x499E0);
		}

		// static const ::System::Object KCJLFGPKJNA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOMOENMNCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOMOENMNCNB*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOMOENMNCNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOMOENMNCNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOMOENMNCNB*>*(*)())((::PBYTE)hIl2Cpp + AOMOENMNCNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOMOENMNCNB* Clone()
		{
			return ((::AOMOENMNCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCNBDFIIKIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_OCNBDFIIKIB_OFFSET))(this);
		}

		::System::Void LFCNIGAHPOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOMOENMNCNB_LFCNIGAHPOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOMOENMNCNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOMOENMNCNB*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMOENMNCNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOMOENMNCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOMOENMNCNB*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOMOENMNCNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
