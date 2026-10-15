#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEKGANLHMHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEKGANLHMHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60F390)
#define IEKGANLHMHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60F5B0)
#define IEKGANLHMHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60EFE0)
#define IEKGANLHMHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60EFB0)
#define IEKGANLHMHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60EFA0)
#define IEKGANLHMHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60F110)
#define IEKGANLHMHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60F040)
#define IEKGANLHMHM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E60F030)
#define IEKGANLHMHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60F280)
#define IEKGANLHMHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E60EF60)
#define IEKGANLHMHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60F450)
#define IEKGANLHMHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60F420)
#define IEKGANLHMHM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E60F020)
#define IEKGANLHMHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60EF90)
#define IEKGANLHMHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60F2B0)
#define IEKGANLHMHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60F310)

inline static constexpr unsigned int IEKGANLHMHM_TypeDefinitionIndex = 29591;

	class IEKGANLHMHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IEKGANLHMHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEKGANLHMHM*>**)UnitySDK::FromName("", "IEKGANLHMHM")->GetStaticField(0x48280);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEKGANLHMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEKGANLHMHM*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEKGANLHMHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEKGANLHMHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEKGANLHMHM*>*(*)())((::PBYTE)hIl2Cpp + IEKGANLHMHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEKGANLHMHM* Clone()
		{
			return ((::IEKGANLHMHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEKGANLHMHM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEKGANLHMHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEKGANLHMHM*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGANLHMHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEKGANLHMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEKGANLHMHM*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEKGANLHMHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
