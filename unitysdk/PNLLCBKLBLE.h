#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDLKIGJLEM;
class PNLLCBKLBLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNLLCBKLBLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBD4A0)
#define PNLLCBKLBLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBD880)
#define PNLLCBKLBLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBCE50)
#define PNLLCBKLBLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBCDC0)
#define PNLLCBKLBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBCDB0)
#define PNLLCBKLBLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBD0B0)
#define PNLLCBKLBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBCF80)
#define PNLLCBKLBLE_FBNLNNKKOFP_OFFSET UNITYSDK_OFFSET(0x1DFBCF50)
#define PNLLCBKLBLE_FEONDNCNGJN_OFFSET UNITYSDK_OFFSET(0x1DFBCF20)
#define PNLLCBKLBLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBD230)
#define PNLLCBKLBLE_HFMEOHAFOPB_OFFSET UNITYSDK_OFFSET(0x1DFBCF60)
#define PNLLCBKLBLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBCD40)
#define PNLLCBKLBLE_KKFHLEJDCGH_OFFSET UNITYSDK_OFFSET(0x1DFBCF30)
#define PNLLCBKLBLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBD670)
#define PNLLCBKLBLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBD580)
#define PNLLCBKLBLE_NKKEEBNBBOK_OFFSET UNITYSDK_OFFSET(0x1DFBCF70)
#define PNLLCBKLBLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBCDA0)
#define PNLLCBKLBLE_PCEFJAAMPNO_OFFSET UNITYSDK_OFFSET(0x1DFBCF40)
#define PNLLCBKLBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBD2D0)
#define PNLLCBKLBLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBD330)

	class PNLLCBKLBLE : public ::System::Object
	{
	public:
		::IEDLKIGJLEM* JMAKOGFJONL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean EGOAMBNKKJO; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NKHBGBNHMDC; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNLLCBKLBLE")->GetStaticField(0x51AF0);
		}

		// static const ::System::Object PGLNAABMNKN; // 0x0
		// static const ::System::Object HDFDJHCLAHG; // 0x0
		// static const ::System::Object JDIJLNGMBND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNLLCBKLBLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLLCBKLBLE*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLLCBKLBLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNLLCBKLBLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNLLCBKLBLE* Clone()
		{
			return ((::PNLLCBKLBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEONDNCNGJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_FEONDNCNGJN_OFFSET))(this);
		}

		::System::Void KKFHLEJDCGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_KKFHLEJDCGH_OFFSET))(this, a1);
		}

		::IEDLKIGJLEM* PCEFJAAMPNO()
		{
			return ((::IEDLKIGJLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_PCEFJAAMPNO_OFFSET))(this);
		}

		::System::Void FBNLNNKKOFP(::IEDLKIGJLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEDLKIGJLEM*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_FBNLNNKKOFP_OFFSET))(this, a1);
		}

		::System::Boolean HFMEOHAFOPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_HFMEOHAFOPB_OFFSET))(this);
		}

		::System::Void NKKEEBNBBOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_NKKEEBNBBOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNLLCBKLBLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNLLCBKLBLE*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNLLCBKLBLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLLCBKLBLE*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNLLCBKLBLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
