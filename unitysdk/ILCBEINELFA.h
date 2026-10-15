#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCBEINELFA;
class KCDHBIEAFDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILCBEINELFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A8320)
#define ILCBEINELFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8750)
#define ILCBEINELFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A7DD0)
#define ILCBEINELFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A7D50)
#define ILCBEINELFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7D40)
#define ILCBEINELFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A8020)
#define ILCBEINELFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A7EA0)
#define ILCBEINELFA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6A7E70)
#define ILCBEINELFA_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E6A7E90)
#define ILCBEINELFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A81A0)
#define ILCBEINELFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A7D00)
#define ILCBEINELFA_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E6A7E80)
#define ILCBEINELFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A8520)
#define ILCBEINELFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A83F0)
#define ILCBEINELFA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6A7E60)
#define ILCBEINELFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7D30)
#define ILCBEINELFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A81E0)
#define ILCBEINELFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A8240)

inline static constexpr unsigned int ILCBEINELFA_TypeDefinitionIndex = 32587;

	class ILCBEINELFA : public ::System::Object
	{
	public:
		::KCDHBIEAFDE* MGBEADJIBJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ILCBEINELFA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILCBEINELFA*>**)UnitySDK::FromName("", "ILCBEINELFA")->GetStaticField(0x55DB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JMEOLDPADHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILCBEINELFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCBEINELFA*))((::PBYTE)hIl2Cpp + ILCBEINELFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCBEINELFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILCBEINELFA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILCBEINELFA*>*(*)())((::PBYTE)hIl2Cpp + ILCBEINELFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILCBEINELFA* Clone()
		{
			return ((::ILCBEINELFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILCBEINELFA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KCDHBIEAFDE* LHJEMKJFLJK()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + ILCBEINELFA_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILCBEINELFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILCBEINELFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILCBEINELFA*))((::PBYTE)hIl2Cpp + ILCBEINELFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILCBEINELFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILCBEINELFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCBEINELFA*))((::PBYTE)hIl2Cpp + ILCBEINELFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILCBEINELFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
