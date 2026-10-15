#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBDGBAALOOJ;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBDGBAALOOJ_AIMADBLFEBD_OFFSET UNITYSDK_OFFSET(0x1E8D9A10)
#define LBDGBAALOOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D9FA0)
#define LBDGBAALOOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DA220)
#define LBDGBAALOOJ_CDADLADHIKI_OFFSET UNITYSDK_OFFSET(0x1E8D9A00)
#define LBDGBAALOOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D9960)
#define LBDGBAALOOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D98D0)
#define LBDGBAALOOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D98C0)
#define LBDGBAALOOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D9B90)
#define LBDGBAALOOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D9A20)
#define LBDGBAALOOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D9E60)
#define LBDGBAALOOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D9880)
#define LBDGBAALOOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8DA090)
#define LBDGBAALOOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8DA000)
#define LBDGBAALOOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D98B0)
#define LBDGBAALOOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D9EB0)
#define LBDGBAALOOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D9F10)

inline static constexpr unsigned int LBDGBAALOOJ_TypeDefinitionIndex = 31047;

	class LBDGBAALOOJ : public ::System::Object
	{
	public:
		::NEMIDPFEJFL* GNEMPOKDHAA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LBDGBAALOOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBDGBAALOOJ*>**)UnitySDK::FromName("", "LBDGBAALOOJ")->GetStaticField(0x30250);
		}

		// static const ::System::Object FHEGNKDJLFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBDGBAALOOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBDGBAALOOJ*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBDGBAALOOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBDGBAALOOJ*>*(*)())((::PBYTE)hIl2Cpp + LBDGBAALOOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBDGBAALOOJ* Clone()
		{
			return ((::LBDGBAALOOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CLONE_OFFSET))(this);
		}

		::NEMIDPFEJFL* CDADLADHIKI()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CDADLADHIKI_OFFSET))(this);
		}

		::System::Void AIMADBLFEBD(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_AIMADBLFEBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBDGBAALOOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBDGBAALOOJ*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBDGBAALOOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBDGBAALOOJ*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBDGBAALOOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
