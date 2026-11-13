#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGODPKFLDNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGODPKFLDNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7E9BB0)
#define IGODPKFLDNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E9DD0)
#define IGODPKFLDNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7E97A0)
#define IGODPKFLDNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7E9770)
#define IGODPKFLDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E9760)
#define IGODPKFLDNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7E9930)
#define IGODPKFLDNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7E9830)
#define IGODPKFLDNE_FJPKMBCDIHP_OFFSET UNITYSDK_OFFSET(0x1F7E9810)
#define IGODPKFLDNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7E9AA0)
#define IGODPKFLDNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7E96F0)
#define IGODPKFLDNE_LCJMPFICPLJ_OFFSET UNITYSDK_OFFSET(0x1F7E9820)
#define IGODPKFLDNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7E9C70)
#define IGODPKFLDNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7E9C40)
#define IGODPKFLDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7E9750)
#define IGODPKFLDNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7E9AD0)
#define IGODPKFLDNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7E9B30)

inline static constexpr unsigned int IGODPKFLDNE_TypeDefinitionIndex = 33972;

	class IGODPKFLDNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GILCLIIHJPE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGODPKFLDNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGODPKFLDNE*>**)UnitySDK::FromName("", "IGODPKFLDNE")->GetStaticField(0x46480);
		}

		// static const ::System::Object BKGKBPKGAEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGODPKFLDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGODPKFLDNE*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGODPKFLDNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGODPKFLDNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGODPKFLDNE*>*(*)())((::PBYTE)hIl2Cpp + IGODPKFLDNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGODPKFLDNE* Clone()
		{
			return ((::IGODPKFLDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJPKMBCDIHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_FJPKMBCDIHP_OFFSET))(this);
		}

		::System::Void LCJMPFICPLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGODPKFLDNE_LCJMPFICPLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGODPKFLDNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGODPKFLDNE*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGODPKFLDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGODPKFLDNE*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGODPKFLDNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
