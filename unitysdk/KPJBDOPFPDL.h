#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJBDOPFPDL;
class OCBPJLLLJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPJBDOPFPDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BC810)
#define KPJBDOPFPDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BCA80)
#define KPJBDOPFPDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BC1D0)
#define KPJBDOPFPDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BC150)
#define KPJBDOPFPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BC140)
#define KPJBDOPFPDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BC3F0)
#define KPJBDOPFPDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BC280)
#define KPJBDOPFPDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BC6C0)
#define KPJBDOPFPDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BC100)
#define KPJBDOPFPDL_LALPEBIMJGB_OFFSET UNITYSDK_OFFSET(0x1E8BC270)
#define KPJBDOPFPDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BC900)
#define KPJBDOPFPDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BC870)
#define KPJBDOPFPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BC130)
#define KPJBDOPFPDL_PHKKAOKKOHK_OFFSET UNITYSDK_OFFSET(0x1E8BC260)
#define KPJBDOPFPDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BC720)
#define KPJBDOPFPDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BC780)

inline static constexpr unsigned int KPJBDOPFPDL_TypeDefinitionIndex = 33099;

	class KPJBDOPFPDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCBPJLLLJGO* AFNGFPEFEGI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPJBDOPFPDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPJBDOPFPDL*>**)UnitySDK::FromName("", "KPJBDOPFPDL")->GetStaticField(0x2CC20);
		}

		// static const ::System::Object PKLBCLGGMHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPJBDOPFPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJBDOPFPDL*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJBDOPFPDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPJBDOPFPDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPJBDOPFPDL*>*(*)())((::PBYTE)hIl2Cpp + KPJBDOPFPDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPJBDOPFPDL* Clone()
		{
			return ((::KPJBDOPFPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_CLONE_OFFSET))(this);
		}

		::OCBPJLLLJGO* PHKKAOKKOHK()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_PHKKAOKKOHK_OFFSET))(this);
		}

		::System::Void LALPEBIMJGB(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_LALPEBIMJGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPJBDOPFPDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPJBDOPFPDL*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPJBDOPFPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJBDOPFPDL*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPJBDOPFPDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
