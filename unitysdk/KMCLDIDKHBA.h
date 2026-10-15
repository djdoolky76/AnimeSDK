#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMCLDIDKHBA;
class KPMAKCHCDMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMCLDIDKHBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E894CD0)
#define KMCLDIDKHBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E894FE0)
#define KMCLDIDKHBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E894760)
#define KMCLDIDKHBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8946E0)
#define KMCLDIDKHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8946D0)
#define KMCLDIDKHBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8949B0)
#define KMCLDIDKHBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E894830)
#define KMCLDIDKHBA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E894800)
#define KMCLDIDKHBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E894B30)
#define KMCLDIDKHBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E894690)
#define KMCLDIDKHBA_KABEJLHMAPL_OFFSET UNITYSDK_OFFSET(0x1E894810)
#define KMCLDIDKHBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E894E50)
#define KMCLDIDKHBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E894DA0)
#define KMCLDIDKHBA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8947F0)
#define KMCLDIDKHBA_OPBJAHFBFCN_OFFSET UNITYSDK_OFFSET(0x1E894820)
#define KMCLDIDKHBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8946C0)
#define KMCLDIDKHBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E894B90)
#define KMCLDIDKHBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E894BF0)

	class KMCLDIDKHBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KPMAKCHCDMH* GHNPKCEKJIP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KMCLDIDKHBA")->GetStaticField(0x21DA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JNKHOBOIDNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMCLDIDKHBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMCLDIDKHBA*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCLDIDKHBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KMCLDIDKHBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMCLDIDKHBA* Clone()
		{
			return ((::KMCLDIDKHBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KPMAKCHCDMH* KABEJLHMAPL()
		{
			return ((::KPMAKCHCDMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_KABEJLHMAPL_OFFSET))(this);
		}

		::System::Void OPBJAHFBFCN(::KPMAKCHCDMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMAKCHCDMH*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_OPBJAHFBFCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMCLDIDKHBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMCLDIDKHBA*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMCLDIDKHBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMCLDIDKHBA*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMCLDIDKHBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
