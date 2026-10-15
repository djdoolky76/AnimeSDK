#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFADBBMPDMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFADBBMPDMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE07DB0)
#define OFADBBMPDMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE07FD0)
#define OFADBBMPDMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE07A00)
#define OFADBBMPDMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE079D0)
#define OFADBBMPDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE079C0)
#define OFADBBMPDMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE07B30)
#define OFADBBMPDMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE07A60)
#define OFADBBMPDMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE07A50)
#define OFADBBMPDMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE07CA0)
#define OFADBBMPDMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE07980)
#define OFADBBMPDMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE07E70)
#define OFADBBMPDMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE07E40)
#define OFADBBMPDMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE07A40)
#define OFADBBMPDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE079B0)
#define OFADBBMPDMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE07CD0)
#define OFADBBMPDMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE07D30)

inline static constexpr unsigned int OFADBBMPDMM_TypeDefinitionIndex = 29712;

	class OFADBBMPDMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OFADBBMPDMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFADBBMPDMM*>**)UnitySDK::FromName("", "OFADBBMPDMM")->GetStaticField(0x14E20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFADBBMPDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFADBBMPDMM*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFADBBMPDMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFADBBMPDMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFADBBMPDMM*>*(*)())((::PBYTE)hIl2Cpp + OFADBBMPDMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFADBBMPDMM* Clone()
		{
			return ((::OFADBBMPDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFADBBMPDMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFADBBMPDMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFADBBMPDMM*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFADBBMPDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFADBBMPDMM*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFADBBMPDMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
