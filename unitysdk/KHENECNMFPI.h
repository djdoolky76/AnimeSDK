#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHENECNMFPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHENECNMFPI_AJGKKDBOLKG_OFFSET UNITYSDK_OFFSET(0x1E813B80)
#define KHENECNMFPI_BEJINBHMFFH_OFFSET UNITYSDK_OFFSET(0x1E813B70)
#define KHENECNMFPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E813ED0)
#define KHENECNMFPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8141A0)
#define KHENECNMFPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E813B20)
#define KHENECNMFPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E813AF0)
#define KHENECNMFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E813AE0)
#define KHENECNMFPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E813C90)
#define KHENECNMFPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E813BB0)
#define KHENECNMFPI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E813BA0)
#define KHENECNMFPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E813D60)
#define KHENECNMFPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E813AA0)
#define KHENECNMFPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E814020)
#define KHENECNMFPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E813FE0)
#define KHENECNMFPI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E813B90)
#define KHENECNMFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E813AD0)
#define KHENECNMFPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E813D90)
#define KHENECNMFPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E813DF0)

inline static constexpr unsigned int KHENECNMFPI_TypeDefinitionIndex = 26521;

	class KHENECNMFPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 AOAJIJMPBBA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KHENECNMFPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHENECNMFPI*>**)UnitySDK::FromName("", "KHENECNMFPI")->GetStaticField(0x15E60);
		}

		// static const ::System::Object IHNNNFJAEJO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHENECNMFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHENECNMFPI*))((::PBYTE)hIl2Cpp + KHENECNMFPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHENECNMFPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHENECNMFPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHENECNMFPI*>*(*)())((::PBYTE)hIl2Cpp + KHENECNMFPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHENECNMFPI* Clone()
		{
			return ((::KHENECNMFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEJINBHMFFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_BEJINBHMFFH_OFFSET))(this);
		}

		::System::Void AJGKKDBOLKG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHENECNMFPI_AJGKKDBOLKG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHENECNMFPI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHENECNMFPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHENECNMFPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHENECNMFPI*))((::PBYTE)hIl2Cpp + KHENECNMFPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHENECNMFPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHENECNMFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHENECNMFPI*))((::PBYTE)hIl2Cpp + KHENECNMFPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHENECNMFPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
