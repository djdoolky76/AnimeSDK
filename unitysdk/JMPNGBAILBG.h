#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPNGBAILBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMPNGBAILBG_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E7641C0)
#define JMPNGBAILBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E764550)
#define JMPNGBAILBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E764770)
#define JMPNGBAILBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E764140)
#define JMPNGBAILBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E764110)
#define JMPNGBAILBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E764100)
#define JMPNGBAILBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7642D0)
#define JMPNGBAILBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7641D0)
#define JMPNGBAILBG_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E7641B0)
#define JMPNGBAILBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E764440)
#define JMPNGBAILBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E764090)
#define JMPNGBAILBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E764610)
#define JMPNGBAILBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7645E0)
#define JMPNGBAILBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7640F0)
#define JMPNGBAILBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E764470)
#define JMPNGBAILBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7644D0)

inline static constexpr unsigned int JMPNGBAILBG_TypeDefinitionIndex = 32928;

	class JMPNGBAILBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMPNGBAILBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMPNGBAILBG*>**)UnitySDK::FromName("", "JMPNGBAILBG")->GetStaticField(0x655C0);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMPNGBAILBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPNGBAILBG*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPNGBAILBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMPNGBAILBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMPNGBAILBG*>*(*)())((::PBYTE)hIl2Cpp + JMPNGBAILBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMPNGBAILBG* Clone()
		{
			return ((::JMPNGBAILBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMPNGBAILBG_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMPNGBAILBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMPNGBAILBG*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMPNGBAILBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPNGBAILBG*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMPNGBAILBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
