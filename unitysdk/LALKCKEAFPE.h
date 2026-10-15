#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGEIAHNDAD;
class LALKCKEAFPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LALKCKEAFPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A33A0)
#define LALKCKEAFPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A35F0)
#define LALKCKEAFPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A2D80)
#define LALKCKEAFPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A2D10)
#define LALKCKEAFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2D00)
#define LALKCKEAFPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A2F90)
#define LALKCKEAFPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A2E20)
#define LALKCKEAFPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A3260)
#define LALKCKEAFPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A2CC0)
#define LALKCKEAFPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A3470)
#define LALKCKEAFPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A3400)
#define LALKCKEAFPE_MNPJGMEHCFG_OFFSET UNITYSDK_OFFSET(0x1E8A2E10)
#define LALKCKEAFPE_OCODKGOJFCB_OFFSET UNITYSDK_OFFSET(0x1E8A2E00)
#define LALKCKEAFPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2CF0)
#define LALKCKEAFPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A32B0)
#define LALKCKEAFPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A3310)

inline static constexpr unsigned int LALKCKEAFPE_TypeDefinitionIndex = 26268;

	class LALKCKEAFPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GDGEIAHNDAD* BPMPCFGEIID; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LALKCKEAFPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LALKCKEAFPE*>**)UnitySDK::FromName("", "LALKCKEAFPE")->GetStaticField(0x24E50);
		}

		// static const ::System::Object DCEOBBHCHPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LALKCKEAFPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LALKCKEAFPE*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALKCKEAFPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LALKCKEAFPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LALKCKEAFPE*>*(*)())((::PBYTE)hIl2Cpp + LALKCKEAFPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LALKCKEAFPE* Clone()
		{
			return ((::LALKCKEAFPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_CLONE_OFFSET))(this);
		}

		::GDGEIAHNDAD* OCODKGOJFCB()
		{
			return ((::GDGEIAHNDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_OCODKGOJFCB_OFFSET))(this);
		}

		::System::Void MNPJGMEHCFG(::GDGEIAHNDAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDGEIAHNDAD*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_MNPJGMEHCFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LALKCKEAFPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LALKCKEAFPE*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LALKCKEAFPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LALKCKEAFPE*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LALKCKEAFPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
