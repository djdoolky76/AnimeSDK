#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPAENEHIBJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPAENEHIBJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCED830)
#define LPAENEHIBJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCEDA50)
#define LPAENEHIBJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCED420)
#define LPAENEHIBJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCED3F0)
#define LPAENEHIBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCED3E0)
#define LPAENEHIBJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCED5B0)
#define LPAENEHIBJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCED4B0)
#define LPAENEHIBJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCED720)
#define LPAENEHIBJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCED370)
#define LPAENEHIBJP_JODOCLHDPOJ_OFFSET UNITYSDK_OFFSET(0x1FCED490)
#define LPAENEHIBJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCED8F0)
#define LPAENEHIBJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCED8C0)
#define LPAENEHIBJP_MNJCBOAAHCL_OFFSET UNITYSDK_OFFSET(0x1FCED4A0)
#define LPAENEHIBJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCED3D0)
#define LPAENEHIBJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCED750)
#define LPAENEHIBJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCED7B0)

inline static constexpr unsigned int LPAENEHIBJP_TypeDefinitionIndex = 30279;

	class LPAENEHIBJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OKMABPBKFLM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LPAENEHIBJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPAENEHIBJP*>**)UnitySDK::FromName("", "LPAENEHIBJP")->GetStaticField(0x47210);
		}

		// static const ::System::Object BOCKOCNDDEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPAENEHIBJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPAENEHIBJP*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPAENEHIBJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPAENEHIBJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPAENEHIBJP*>*(*)())((::PBYTE)hIl2Cpp + LPAENEHIBJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPAENEHIBJP* Clone()
		{
			return ((::LPAENEHIBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JODOCLHDPOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_JODOCLHDPOJ_OFFSET))(this);
		}

		::System::Void MNJCBOAAHCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPAENEHIBJP_MNJCBOAAHCL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPAENEHIBJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPAENEHIBJP*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPAENEHIBJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPAENEHIBJP*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPAENEHIBJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
