#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFKCKOIFCM;
class DNLKMHLAPHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOFKCKOIFCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63D600)
#define AOFKCKOIFCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63D920)
#define AOFKCKOIFCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63CFE0)
#define AOFKCKOIFCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63CF70)
#define AOFKCKOIFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63CF60)
#define AOFKCKOIFCM_DGKGBNOFBKP_OFFSET UNITYSDK_OFFSET(0x1E63D060)
#define AOFKCKOIFCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63D1F0)
#define AOFKCKOIFCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63D080)
#define AOFKCKOIFCM_FBLCOCCHDCN_OFFSET UNITYSDK_OFFSET(0x1E63D070)
#define AOFKCKOIFCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63D4C0)
#define AOFKCKOIFCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63CF20)
#define AOFKCKOIFCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63D730)
#define AOFKCKOIFCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63D660)
#define AOFKCKOIFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63CF50)
#define AOFKCKOIFCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63D510)
#define AOFKCKOIFCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63D570)

inline static constexpr unsigned int AOFKCKOIFCM_TypeDefinitionIndex = 33083;

	class AOFKCKOIFCM : public ::System::Object
	{
	public:
		::DNLKMHLAPHC* IMIONEEHMPB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AOFKCKOIFCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOFKCKOIFCM*>**)UnitySDK::FromName("", "AOFKCKOIFCM")->GetStaticField(0x48D40);
		}

		// static const ::System::Object PFDFBOCEDGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOFKCKOIFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFKCKOIFCM*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFKCKOIFCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOFKCKOIFCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOFKCKOIFCM*>*(*)())((::PBYTE)hIl2Cpp + AOFKCKOIFCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOFKCKOIFCM* Clone()
		{
			return ((::AOFKCKOIFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_CLONE_OFFSET))(this);
		}

		::DNLKMHLAPHC* DGKGBNOFBKP()
		{
			return ((::DNLKMHLAPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_DGKGBNOFBKP_OFFSET))(this);
		}

		::System::Void FBLCOCCHDCN(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_FBLCOCCHDCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOFKCKOIFCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOFKCKOIFCM*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOFKCKOIFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFKCKOIFCM*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOFKCKOIFCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
