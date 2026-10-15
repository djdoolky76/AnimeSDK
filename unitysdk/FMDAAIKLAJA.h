#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMDAAIKLAJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMDAAIKLAJA_BPOMEFHFMDB_OFFSET UNITYSDK_OFFSET(0x1E3DFA00)
#define FMDAAIKLAJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DFE50)
#define FMDAAIKLAJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0100)
#define FMDAAIKLAJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DF980)
#define FMDAAIKLAJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DF940)
#define FMDAAIKLAJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF930)
#define FMDAAIKLAJA_EFBJOAFBJPA_OFFSET UNITYSDK_OFFSET(0x1E3DF9F0)
#define FMDAAIKLAJA_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E3DF9D0)
#define FMDAAIKLAJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DFB30)
#define FMDAAIKLAJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DFA30)
#define FMDAAIKLAJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DFC20)
#define FMDAAIKLAJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DF8F0)
#define FMDAAIKLAJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DFF50)
#define FMDAAIKLAJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DFF00)
#define FMDAAIKLAJA_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E3DF9E0)
#define FMDAAIKLAJA_OGJPOCLKHGL_OFFSET UNITYSDK_OFFSET(0x1E3DFA10)
#define FMDAAIKLAJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF920)
#define FMDAAIKLAJA_PEGHDAEBHPA_OFFSET UNITYSDK_OFFSET(0x1E3DFA20)
#define FMDAAIKLAJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DFC50)
#define FMDAAIKLAJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DFCB0)

inline static constexpr unsigned int FMDAAIKLAJA_TypeDefinitionIndex = 25189;

	class FMDAAIKLAJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean CGMNJLIGCCF; // 0x18
		::System::Boolean FCJNHNKPEED; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FMDAAIKLAJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMDAAIKLAJA*>**)UnitySDK::FromName("", "FMDAAIKLAJA")->GetStaticField(0x18050);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object NHAJEMFKNIK; // 0x0
		// static const ::System::Object COFJDNMKNJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMDAAIKLAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMDAAIKLAJA*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMDAAIKLAJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMDAAIKLAJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMDAAIKLAJA*>*(*)())((::PBYTE)hIl2Cpp + FMDAAIKLAJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMDAAIKLAJA* Clone()
		{
			return ((::FMDAAIKLAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean EFBJOAFBJPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_EFBJOAFBJPA_OFFSET))(this);
		}

		::System::Void BPOMEFHFMDB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_BPOMEFHFMDB_OFFSET))(this, a1);
		}

		::System::Boolean OGJPOCLKHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_OGJPOCLKHGL_OFFSET))(this);
		}

		::System::Void PEGHDAEBHPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_PEGHDAEBHPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMDAAIKLAJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMDAAIKLAJA*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMDAAIKLAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMDAAIKLAJA*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMDAAIKLAJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
