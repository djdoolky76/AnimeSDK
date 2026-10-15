#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPCODGNDEG;
class LGMDACIPFHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGPCODGNDEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E80FA00)
#define KGPCODGNDEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80FD20)
#define KGPCODGNDEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80F4B0)
#define KGPCODGNDEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80F440)
#define KGPCODGNDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80F430)
#define KGPCODGNDEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E80F6F0)
#define KGPCODGNDEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80F570)
#define KGPCODGNDEG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E80F560)
#define KGPCODGNDEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E80F870)
#define KGPCODGNDEG_IBGKDMDCEIP_OFFSET UNITYSDK_OFFSET(0x1E80F540)
#define KGPCODGNDEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80F3F0)
#define KGPCODGNDEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E80FB60)
#define KGPCODGNDEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E80FAD0)
#define KGPCODGNDEG_NJJGDFKBDJG_OFFSET UNITYSDK_OFFSET(0x1E80F530)
#define KGPCODGNDEG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E80F550)
#define KGPCODGNDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80F420)
#define KGPCODGNDEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E80F8C0)
#define KGPCODGNDEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E80F920)

inline static constexpr unsigned int KGPCODGNDEG_TypeDefinitionIndex = 30783;

	class KGPCODGNDEG : public ::System::Object
	{
	public:
		::LGMDACIPFHL* MEHFLPMNFEB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KGPCODGNDEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGPCODGNDEG*>**)UnitySDK::FromName("", "KGPCODGNDEG")->GetStaticField(0x158B0);
		}

		// static const ::System::Object MIINDKFMBBM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGPCODGNDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCODGNDEG*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGPCODGNDEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGPCODGNDEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGPCODGNDEG*>*(*)())((::PBYTE)hIl2Cpp + KGPCODGNDEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGPCODGNDEG* Clone()
		{
			return ((::KGPCODGNDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_CLONE_OFFSET))(this);
		}

		::LGMDACIPFHL* NJJGDFKBDJG()
		{
			return ((::LGMDACIPFHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_NJJGDFKBDJG_OFFSET))(this);
		}

		::System::Void IBGKDMDCEIP(::LGMDACIPFHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGMDACIPFHL*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_IBGKDMDCEIP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGPCODGNDEG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGPCODGNDEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGPCODGNDEG*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGPCODGNDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCODGNDEG*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGPCODGNDEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
