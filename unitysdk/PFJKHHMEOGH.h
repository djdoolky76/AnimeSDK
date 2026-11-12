#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHAHDBDOIE;
class PFJKHHMEOGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFJKHHMEOGH_AGGPLJDCNOF_OFFSET UNITYSDK_OFFSET(0x1F1F1D80)
#define PFJKHHMEOGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1F2270)
#define PFJKHHMEOGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F2610)
#define PFJKHHMEOGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1F1CD0)
#define PFJKHHMEOGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1F1C50)
#define PFJKHHMEOGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F1C40)
#define PFJKHHMEOGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1F1F20)
#define PFJKHHMEOGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1F1DA0)
#define PFJKHHMEOGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F1F1D70)
#define PFJKHHMEOGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1F20A0)
#define PFJKHHMEOGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1F1C00)
#define PFJKHHMEOGH_KADIIIFAFEH_OFFSET UNITYSDK_OFFSET(0x1F1F1D90)
#define PFJKHHMEOGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1F2420)
#define PFJKHHMEOGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1F2340)
#define PFJKHHMEOGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F1F1D60)
#define PFJKHHMEOGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1F1C30)
#define PFJKHHMEOGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1F2130)
#define PFJKHHMEOGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1F2190)

inline static constexpr unsigned int PFJKHHMEOGH_TypeDefinitionIndex = 33909;

	class PFJKHHMEOGH : public ::System::Object
	{
	public:
		::GBHAHDBDOIE* ALLCIFOFFGA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PFJKHHMEOGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFJKHHMEOGH*>**)UnitySDK::FromName("", "PFJKHHMEOGH")->GetStaticField(0x320A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FEAJJNBCACE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFJKHHMEOGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJKHHMEOGH*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFJKHHMEOGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFJKHHMEOGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFJKHHMEOGH*>*(*)())((::PBYTE)hIl2Cpp + PFJKHHMEOGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFJKHHMEOGH* Clone()
		{
			return ((::PFJKHHMEOGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GBHAHDBDOIE* AGGPLJDCNOF()
		{
			return ((::GBHAHDBDOIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_AGGPLJDCNOF_OFFSET))(this);
		}

		::System::Void KADIIIFAFEH(::GBHAHDBDOIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHAHDBDOIE*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_KADIIIFAFEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFJKHHMEOGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFJKHHMEOGH*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFJKHHMEOGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJKHHMEOGH*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFJKHHMEOGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
