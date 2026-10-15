#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIKFHAIJGDH;
class MAOINJAJOEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIKFHAIJGDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27DEB0)
#define AIKFHAIJGDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27E1C0)
#define AIKFHAIJGDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27D990)
#define AIKFHAIJGDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27D940)
#define AIKFHAIJGDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27D930)
#define AIKFHAIJGDH_DFMFECOINOI_OFFSET UNITYSDK_OFFSET(0x1E27DA20)
#define AIKFHAIJGDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27DBB0)
#define AIKFHAIJGDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27DA30)
#define AIKFHAIJGDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E27DA00)
#define AIKFHAIJGDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27DD30)
#define AIKFHAIJGDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27D8F0)
#define AIKFHAIJGDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27E010)
#define AIKFHAIJGDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27DF80)
#define AIKFHAIJGDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E27D9F0)
#define AIKFHAIJGDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27D920)
#define AIKFHAIJGDH_PFPPLLJFBAM_OFFSET UNITYSDK_OFFSET(0x1E27DA10)
#define AIKFHAIJGDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27DD70)
#define AIKFHAIJGDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27DDD0)

inline static constexpr unsigned int AIKFHAIJGDH_TypeDefinitionIndex = 31944;

	class AIKFHAIJGDH : public ::System::Object
	{
	public:
		::MAOINJAJOEC* KFDOLCMLJGP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIKFHAIJGDH")->GetStaticField(0x33230);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MDBNPFKPBCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIKFHAIJGDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKFHAIJGDH*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIKFHAIJGDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIKFHAIJGDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIKFHAIJGDH* Clone()
		{
			return ((::AIKFHAIJGDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::MAOINJAJOEC* PFPPLLJFBAM()
		{
			return ((::MAOINJAJOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_PFPPLLJFBAM_OFFSET))(this);
		}

		::System::Void DFMFECOINOI(::MAOINJAJOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAOINJAJOEC*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_DFMFECOINOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIKFHAIJGDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIKFHAIJGDH*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIKFHAIJGDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKFHAIJGDH*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIKFHAIJGDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
