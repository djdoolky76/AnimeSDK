#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJCFFIDJFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNJCFFIDJFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6DA80)
#define MNJCFFIDJFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6DD50)
#define MNJCFFIDJFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6D6D0)
#define MNJCFFIDJFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6D6A0)
#define MNJCFFIDJFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D690)
#define MNJCFFIDJFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6D840)
#define MNJCFFIDJFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6D760)
#define MNJCFFIDJFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA6D750)
#define MNJCFFIDJFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6D910)
#define MNJCFFIDJFO_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1EA6D730)
#define MNJCFFIDJFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6D650)
#define MNJCFFIDJFO_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1EA6D720)
#define MNJCFFIDJFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6DBD0)
#define MNJCFFIDJFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6DB90)
#define MNJCFFIDJFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA6D740)
#define MNJCFFIDJFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D680)
#define MNJCFFIDJFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6D940)
#define MNJCFFIDJFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6D9A0)

inline static constexpr unsigned int MNJCFFIDJFO_TypeDefinitionIndex = 29649;

	class MNJCFFIDJFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 JHCOABLIANB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MNJCFFIDJFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNJCFFIDJFO*>**)UnitySDK::FromName("", "MNJCFFIDJFO")->GetStaticField(0x597F0);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNJCFFIDJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJCFFIDJFO*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJCFFIDJFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNJCFFIDJFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNJCFFIDJFO*>*(*)())((::PBYTE)hIl2Cpp + MNJCFFIDJFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNJCFFIDJFO* Clone()
		{
			return ((::MNJCFFIDJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNJCFFIDJFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNJCFFIDJFO*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNJCFFIDJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJCFFIDJFO*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNJCFFIDJFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
