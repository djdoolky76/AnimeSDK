#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOJJLDAKMFL;
class OOLJJHMLHBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOJJLDAKMFL_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E3CFBC0)
#define FOJJLDAKMFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D01D0)
#define FOJJLDAKMFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D05C0)
#define FOJJLDAKMFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3CFA90)
#define FOJJLDAKMFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3CFA00)
#define FOJJLDAKMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CF9F0)
#define FOJJLDAKMFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3CFD90)
#define FOJJLDAKMFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3CFBD0)
#define FOJJLDAKMFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3CFF50)
#define FOJJLDAKMFL_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E3CFBB0)
#define FOJJLDAKMFL_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E3CFB40)
#define FOJJLDAKMFL_ICLHEBBJGDP_OFFSET UNITYSDK_OFFSET(0x1E3CFB90)
#define FOJJLDAKMFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3CF9B0)
#define FOJJLDAKMFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D03B0)
#define FOJJLDAKMFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D02F0)
#define FOJJLDAKMFL_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E3CFB30)
#define FOJJLDAKMFL_MOKNHDLNIHH_OFFSET UNITYSDK_OFFSET(0x1E3CFBA0)
#define FOJJLDAKMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3CF9E0)
#define FOJJLDAKMFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D0020)
#define FOJJLDAKMFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D0080)

inline static constexpr unsigned int FOJJLDAKMFL_TypeDefinitionIndex = 33762;

	class FOJJLDAKMFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OOLJJHMLHBH* KINOMHJKOHL; // 0x18
		::System::String* IOGCODPGEEA; // 0x20
		::System::UInt32 MDHELICKNPE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::FOJJLDAKMFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOJJLDAKMFL*>**)UnitySDK::FromName("", "FOJJLDAKMFL")->GetStaticField(0x5E830);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object OLEBEAPKMFK; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOJJLDAKMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJJLDAKMFL*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJJLDAKMFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOJJLDAKMFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOJJLDAKMFL*>*(*)())((::PBYTE)hIl2Cpp + FOJJLDAKMFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOJJLDAKMFL* Clone()
		{
			return ((::FOJJLDAKMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_HABCMACJEIN_OFFSET))(this, a1);
		}

		::OOLJJHMLHBH* ICLHEBBJGDP()
		{
			return ((::OOLJJHMLHBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_ICLHEBBJGDP_OFFSET))(this);
		}

		::System::Void MOKNHDLNIHH(::OOLJJHMLHBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOLJJHMLHBH*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_MOKNHDLNIHH_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOJJLDAKMFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOJJLDAKMFL*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOJJLDAKMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJJLDAKMFL*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOJJLDAKMFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
