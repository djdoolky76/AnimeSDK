#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHBEOHDMHDA;
class OCBPJLLLJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHBEOHDMHDA_BIAAPAOGCBC_OFFSET UNITYSDK_OFFSET(0x1E713FE0)
#define JHBEOHDMHDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E714500)
#define JHBEOHDMHDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E714790)
#define JHBEOHDMHDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E713EF0)
#define JHBEOHDMHDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E713E70)
#define JHBEOHDMHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E713E60)
#define JHBEOHDMHDA_EJKNMFBMPCA_OFFSET UNITYSDK_OFFSET(0x1E713FC0)
#define JHBEOHDMHDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7141B0)
#define JHBEOHDMHDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E713FF0)
#define JHBEOHDMHDA_GCBKAFGMDLH_OFFSET UNITYSDK_OFFSET(0x1E713FD0)
#define JHBEOHDMHDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E714330)
#define JHBEOHDMHDA_INLHKEEKBMB_OFFSET UNITYSDK_OFFSET(0x1E713FB0)
#define JHBEOHDMHDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E713DF0)
#define JHBEOHDMHDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E714600)
#define JHBEOHDMHDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E714560)
#define JHBEOHDMHDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E713E50)
#define JHBEOHDMHDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E714390)
#define JHBEOHDMHDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7143F0)

inline static constexpr unsigned int JHBEOHDMHDA_TypeDefinitionIndex = 33097;

	class JHBEOHDMHDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCBPJLLLJGO* LABMEBNLBCI; // 0x18
		::System::Boolean HCBBOMNMPAM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JHBEOHDMHDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHBEOHDMHDA*>**)UnitySDK::FromName("", "JHBEOHDMHDA")->GetStaticField(0x5EC90);
		}

		// static const ::System::Object NOOBKDPKMFE; // 0x0
		// static const ::System::Object GJEJOEDMFMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHBEOHDMHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHBEOHDMHDA*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHBEOHDMHDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHBEOHDMHDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHBEOHDMHDA*>*(*)())((::PBYTE)hIl2Cpp + JHBEOHDMHDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHBEOHDMHDA* Clone()
		{
			return ((::JHBEOHDMHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_CLONE_OFFSET))(this);
		}

		::OCBPJLLLJGO* INLHKEEKBMB()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_INLHKEEKBMB_OFFSET))(this);
		}

		::System::Void EJKNMFBMPCA(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_EJKNMFBMPCA_OFFSET))(this, a1);
		}

		::System::Boolean GCBKAFGMDLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_GCBKAFGMDLH_OFFSET))(this);
		}

		::System::Void BIAAPAOGCBC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_BIAAPAOGCBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHBEOHDMHDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHBEOHDMHDA*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHBEOHDMHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHBEOHDMHDA*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHBEOHDMHDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
