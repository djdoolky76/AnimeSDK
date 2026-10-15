#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILODDMBANJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EILODDMBANJ_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E27EAA0)
#define EILODDMBANJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27EE00)
#define EILODDMBANJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27F0D0)
#define EILODDMBANJ_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E27EAB0)
#define EILODDMBANJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27EA50)
#define EILODDMBANJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27EA20)
#define EILODDMBANJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27EA10)
#define EILODDMBANJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E27EAD0)
#define EILODDMBANJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27EBC0)
#define EILODDMBANJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27EAE0)
#define EILODDMBANJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27EC90)
#define EILODDMBANJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27E9D0)
#define EILODDMBANJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27EF50)
#define EILODDMBANJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27EF10)
#define EILODDMBANJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E27EAC0)
#define EILODDMBANJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27EA00)
#define EILODDMBANJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27ECC0)
#define EILODDMBANJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27ED20)

inline static constexpr unsigned int EILODDMBANJ_TypeDefinitionIndex = 31948;

	class EILODDMBANJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFKHBNCHKBI; // 0x18
		::System::UInt32 PDKNJCIEBHA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EILODDMBANJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EILODDMBANJ*>**)UnitySDK::FromName("", "EILODDMBANJ")->GetStaticField(0x4AFC0);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EILODDMBANJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILODDMBANJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EILODDMBANJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EILODDMBANJ*>*(*)())((::PBYTE)hIl2Cpp + EILODDMBANJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EILODDMBANJ* Clone()
		{
			return ((::EILODDMBANJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILODDMBANJ_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EILODDMBANJ_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILODDMBANJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EILODDMBANJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EILODDMBANJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EILODDMBANJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILODDMBANJ*))((::PBYTE)hIl2Cpp + EILODDMBANJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EILODDMBANJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
