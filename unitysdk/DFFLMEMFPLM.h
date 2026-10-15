#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFFLMEMFPLM;
class PFPPACPMFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFFLMEMFPLM_AIOMIICNLAP_OFFSET UNITYSDK_OFFSET(0x1E173E40)
#define DFFLMEMFPLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1742F0)
#define DFFLMEMFPLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E174630)
#define DFFLMEMFPLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E173D80)
#define DFFLMEMFPLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E173CF0)
#define DFFLMEMFPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E173CE0)
#define DFFLMEMFPLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E173FE0)
#define DFFLMEMFPLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E173E60)
#define DFFLMEMFPLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E174160)
#define DFFLMEMFPLM_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E173E30)
#define DFFLMEMFPLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E173CA0)
#define DFFLMEMFPLM_JOCPANPPOIJ_OFFSET UNITYSDK_OFFSET(0x1E173E50)
#define DFFLMEMFPLM_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E173E20)
#define DFFLMEMFPLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E174480)
#define DFFLMEMFPLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1743C0)
#define DFFLMEMFPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E173CD0)
#define DFFLMEMFPLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1741B0)
#define DFFLMEMFPLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E174210)

inline static constexpr unsigned int DFFLMEMFPLM_TypeDefinitionIndex = 27055;

	class DFFLMEMFPLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PFPPACPMFDJ* KJCPDKKLFEP; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DFFLMEMFPLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFFLMEMFPLM*>**)UnitySDK::FromName("", "DFFLMEMFPLM")->GetStaticField(0x2D8B0);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object CIFIGNAEMHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFFLMEMFPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFFLMEMFPLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFFLMEMFPLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFFLMEMFPLM*>*(*)())((::PBYTE)hIl2Cpp + DFFLMEMFPLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFFLMEMFPLM* Clone()
		{
			return ((::DFFLMEMFPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::PFPPACPMFDJ* AIOMIICNLAP()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_AIOMIICNLAP_OFFSET))(this);
		}

		::System::Void JOCPANPPOIJ(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_JOCPANPPOIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFFLMEMFPLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFFLMEMFPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFLMEMFPLM*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFFLMEMFPLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
