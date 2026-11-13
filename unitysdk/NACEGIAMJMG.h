#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NACEGIAMJMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NACEGIAMJMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20145E80)
#define NACEGIAMJMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x201460E0)
#define NACEGIAMJMG_CLONE_OFFSET UNITYSDK_OFFSET(0x20145A30)
#define NACEGIAMJMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201459F0)
#define NACEGIAMJMG_CTOR_OFFSET UNITYSDK_OFFSET(0x201459E0)
#define NACEGIAMJMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20145C00)
#define NACEGIAMJMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20145AF0)
#define NACEGIAMJMG_FLGKHNLIAOL_OFFSET UNITYSDK_OFFSET(0x20145AE0)
#define NACEGIAMJMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20145CE0)
#define NACEGIAMJMG_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x20145AB0)
#define NACEGIAMJMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20145970)
#define NACEGIAMJMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20145F60)
#define NACEGIAMJMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20145F20)
#define NACEGIAMJMG_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x20145AC0)
#define NACEGIAMJMG_OBNDPBNPOLJ_OFFSET UNITYSDK_OFFSET(0x20145AD0)
#define NACEGIAMJMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201459D0)
#define NACEGIAMJMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20145D10)
#define NACEGIAMJMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x20145D70)

inline static constexpr unsigned int NACEGIAMJMG_TypeDefinitionIndex = 28521;

	class NACEGIAMJMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LIFLOCBONIF; // 0x18
		::System::Boolean MNEDBKBAJJF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NACEGIAMJMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NACEGIAMJMG*>**)UnitySDK::FromName("", "NACEGIAMJMG")->GetStaticField(0x56520);
		}

		// static const ::System::Object EOGEPKBLOBE; // 0x0
		// static const ::System::Object FCKBLNMJMIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NACEGIAMJMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NACEGIAMJMG*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NACEGIAMJMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NACEGIAMJMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NACEGIAMJMG*>*(*)())((::PBYTE)hIl2Cpp + NACEGIAMJMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NACEGIAMJMG* Clone()
		{
			return ((::NACEGIAMJMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_CLONE_OFFSET))(this);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NACEGIAMJMG_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::System::UInt32 OBNDPBNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_OBNDPBNPOLJ_OFFSET))(this);
		}

		::System::Void FLGKHNLIAOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NACEGIAMJMG_FLGKHNLIAOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NACEGIAMJMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NACEGIAMJMG*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NACEGIAMJMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NACEGIAMJMG*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NACEGIAMJMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
