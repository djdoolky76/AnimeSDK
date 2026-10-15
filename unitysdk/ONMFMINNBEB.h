#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCBPJLLLJGO;
class ONMFMINNBEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONMFMINNBEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA14B0)
#define ONMFMINNBEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA1720)
#define ONMFMINNBEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA0E70)
#define ONMFMINNBEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA0DF0)
#define ONMFMINNBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0DE0)
#define ONMFMINNBEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA1090)
#define ONMFMINNBEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA0F20)
#define ONMFMINNBEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA1360)
#define ONMFMINNBEB_JDCJMJPNDMM_OFFSET UNITYSDK_OFFSET(0x1DEA0F00)
#define ONMFMINNBEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA0DA0)
#define ONMFMINNBEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA15A0)
#define ONMFMINNBEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA1510)
#define ONMFMINNBEB_MJKCCPOHMCH_OFFSET UNITYSDK_OFFSET(0x1DEA0F10)
#define ONMFMINNBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0DD0)
#define ONMFMINNBEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA13C0)
#define ONMFMINNBEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA1420)

inline static constexpr unsigned int ONMFMINNBEB_TypeDefinitionIndex = 33197;

	class ONMFMINNBEB : public ::System::Object
	{
	public:
		::OCBPJLLLJGO* NAFMOIEMOAJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ONMFMINNBEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONMFMINNBEB*>**)UnitySDK::FromName("", "ONMFMINNBEB")->GetStaticField(0x19D60);
		}

		// static const ::System::Object BDDMMDKHEPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONMFMINNBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONMFMINNBEB*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMFMINNBEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONMFMINNBEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONMFMINNBEB*>*(*)())((::PBYTE)hIl2Cpp + ONMFMINNBEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONMFMINNBEB* Clone()
		{
			return ((::ONMFMINNBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_CLONE_OFFSET))(this);
		}

		::OCBPJLLLJGO* JDCJMJPNDMM()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_JDCJMJPNDMM_OFFSET))(this);
		}

		::System::Void MJKCCPOHMCH(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_MJKCCPOHMCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONMFMINNBEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONMFMINNBEB*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONMFMINNBEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONMFMINNBEB*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONMFMINNBEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
