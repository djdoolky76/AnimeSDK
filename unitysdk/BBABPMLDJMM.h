#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBABPMLDJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBABPMLDJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78FBA0)
#define BBABPMLDJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78FC40)
#define BBABPMLDJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78F890)
#define BBABPMLDJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78F860)
#define BBABPMLDJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78F850)
#define BBABPMLDJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78F9A0)
#define BBABPMLDJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78F8D0)
#define BBABPMLDJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78FB00)
#define BBABPMLDJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78F810)
#define BBABPMLDJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E78FBF0)
#define BBABPMLDJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E78FBC0)
#define BBABPMLDJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78F840)
#define BBABPMLDJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78FB30)
#define BBABPMLDJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78FB90)

inline static constexpr unsigned int BBABPMLDJMM_TypeDefinitionIndex = 30057;

	class BBABPMLDJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BBABPMLDJMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBABPMLDJMM*>**)UnitySDK::FromName("", "BBABPMLDJMM")->GetStaticField(0x4CFC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBABPMLDJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBABPMLDJMM*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBABPMLDJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBABPMLDJMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBABPMLDJMM*>*(*)())((::PBYTE)hIl2Cpp + BBABPMLDJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBABPMLDJMM* Clone()
		{
			return ((::BBABPMLDJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBABPMLDJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBABPMLDJMM*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBABPMLDJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBABPMLDJMM*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBABPMLDJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
