#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPEHFBKPHP;
class CCOHBABCHAI;
class GLMGJFEEJHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOPEHFBKPHP_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1E6431C0)
#define AOPEHFBKPHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E643810)
#define AOPEHFBKPHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E643B50)
#define AOPEHFBKPHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6430C0)
#define AOPEHFBKPHP_COFJODHIIOJ_OFFSET UNITYSDK_OFFSET(0x1E6431E0)
#define AOPEHFBKPHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E642FD0)
#define AOPEHFBKPHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642FC0)
#define AOPEHFBKPHP_DBHOFBDJICK_OFFSET UNITYSDK_OFFSET(0x1E6431F0)
#define AOPEHFBKPHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E643430)
#define AOPEHFBKPHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E643200)
#define AOPEHFBKPHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E643660)
#define AOPEHFBKPHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E642F80)
#define AOPEHFBKPHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6439A0)
#define AOPEHFBKPHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6438A0)
#define AOPEHFBKPHP_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1E6431D0)
#define AOPEHFBKPHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E642FB0)
#define AOPEHFBKPHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6436D0)
#define AOPEHFBKPHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E643730)

inline static constexpr unsigned int AOPEHFBKPHP_TypeDefinitionIndex = 31117;

	class AOPEHFBKPHP : public ::System::Object
	{
	public:
		::GLMGJFEEJHD* MHNBLPIPJFB; // 0x10
		::CCOHBABCHAI* NOKHPLNEFPD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AOPEHFBKPHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOPEHFBKPHP*>**)UnitySDK::FromName("", "AOPEHFBKPHP")->GetStaticField(0x49AC0);
		}

		// static const ::System::Object BDDLABJNOIN; // 0x0
		// static const ::System::Object NDELDCLFFBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOPEHFBKPHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPEHFBKPHP*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOPEHFBKPHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOPEHFBKPHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOPEHFBKPHP*>*(*)())((::PBYTE)hIl2Cpp + AOPEHFBKPHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOPEHFBKPHP* Clone()
		{
			return ((::AOPEHFBKPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_CLONE_OFFSET))(this);
		}

		::GLMGJFEEJHD* AOFAMJMIOCN()
		{
			return ((::GLMGJFEEJHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_AOFAMJMIOCN_OFFSET))(this);
		}

		::System::Void PAIFLDEKLKL(::GLMGJFEEJHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLMGJFEEJHD*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_PAIFLDEKLKL_OFFSET))(this, a1);
		}

		::CCOHBABCHAI* COFJODHIIOJ()
		{
			return ((::CCOHBABCHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_COFJODHIIOJ_OFFSET))(this);
		}

		::System::Void DBHOFBDJICK(::CCOHBABCHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOHBABCHAI*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_DBHOFBDJICK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOPEHFBKPHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOPEHFBKPHP*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOPEHFBKPHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPEHFBKPHP*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOPEHFBKPHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
