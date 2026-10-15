#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHLECEJHPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKHLECEJHPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A1470)
#define IKHLECEJHPO_CBJJEJPONHM_OFFSET UNITYSDK_OFFSET(0x1E6A1110)
#define IKHLECEJHPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A1740)
#define IKHLECEJHPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A10C0)
#define IKHLECEJHPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A1090)
#define IKHLECEJHPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A1080)
#define IKHLECEJHPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A1230)
#define IKHLECEJHPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A1150)
#define IKHLECEJHPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A1300)
#define IKHLECEJHPO_IAMIMICDECJ_OFFSET UNITYSDK_OFFSET(0x1E6A1130)
#define IKHLECEJHPO_IDHNGMHEECK_OFFSET UNITYSDK_OFFSET(0x1E6A1140)
#define IKHLECEJHPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A1040)
#define IKHLECEJHPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A15C0)
#define IKHLECEJHPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A1580)
#define IKHLECEJHPO_MGDOANFEAGB_OFFSET UNITYSDK_OFFSET(0x1E6A1120)
#define IKHLECEJHPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A1070)
#define IKHLECEJHPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A1330)
#define IKHLECEJHPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A1390)

inline static constexpr unsigned int IKHLECEJHPO_TypeDefinitionIndex = 30671;

	class IKHLECEJHPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 COLMGIKDBCF; // 0x18
		::System::UInt32 BBFIDKMHBJA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IKHLECEJHPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKHLECEJHPO*>**)UnitySDK::FromName("", "IKHLECEJHPO")->GetStaticField(0x54C90);
		}

		// static const ::System::Object GLLGMKHEFKE; // 0x0
		// static const ::System::Object DLHHGGFJEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKHLECEJHPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKHLECEJHPO*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHLECEJHPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKHLECEJHPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKHLECEJHPO*>*(*)())((::PBYTE)hIl2Cpp + IKHLECEJHPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKHLECEJHPO* Clone()
		{
			return ((::IKHLECEJHPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CBJJEJPONHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_CBJJEJPONHM_OFFSET))(this);
		}

		::System::Void MGDOANFEAGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKHLECEJHPO_MGDOANFEAGB_OFFSET))(this, a1);
		}

		::System::UInt32 IAMIMICDECJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_IAMIMICDECJ_OFFSET))(this);
		}

		::System::Void IDHNGMHEECK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKHLECEJHPO_IDHNGMHEECK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKHLECEJHPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKHLECEJHPO*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHLECEJHPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKHLECEJHPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKHLECEJHPO*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKHLECEJHPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
