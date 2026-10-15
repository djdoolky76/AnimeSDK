#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEOGDOGDMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGEOGDOGDMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FD470)
#define AGEOGDOGDMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD690)
#define AGEOGDOGDMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FD0C0)
#define AGEOGDOGDMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FD090)
#define AGEOGDOGDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD080)
#define AGEOGDOGDMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FD1F0)
#define AGEOGDOGDMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FD120)
#define AGEOGDOGDMM_FHMPHDINKCH_OFFSET UNITYSDK_OFFSET(0x1E0FD100)
#define AGEOGDOGDMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FD360)
#define AGEOGDOGDMM_GGNOKALMFGL_OFFSET UNITYSDK_OFFSET(0x1E0FD110)
#define AGEOGDOGDMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FD040)
#define AGEOGDOGDMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FD530)
#define AGEOGDOGDMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FD500)
#define AGEOGDOGDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD070)
#define AGEOGDOGDMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FD390)
#define AGEOGDOGDMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FD3F0)

inline static constexpr unsigned int AGEOGDOGDMM_TypeDefinitionIndex = 32912;

	class AGEOGDOGDMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPJPEIHHLFK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AGEOGDOGDMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGEOGDOGDMM*>**)UnitySDK::FromName("", "AGEOGDOGDMM")->GetStaticField(0x37180);
		}

		// static const ::System::Object BPEAEEAGCNP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGEOGDOGDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEOGDOGDMM*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEOGDOGDMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGEOGDOGDMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGEOGDOGDMM*>*(*)())((::PBYTE)hIl2Cpp + AGEOGDOGDMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGEOGDOGDMM* Clone()
		{
			return ((::AGEOGDOGDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FHMPHDINKCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_FHMPHDINKCH_OFFSET))(this);
		}

		::System::Void GGNOKALMFGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_GGNOKALMFGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGEOGDOGDMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGEOGDOGDMM*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGEOGDOGDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEOGDOGDMM*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGEOGDOGDMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
