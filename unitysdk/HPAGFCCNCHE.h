#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJLECIIEKGI;
class HPAGFCCNCHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPAGFCCNCHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F3CB0)
#define HPAGFCCNCHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F3F30)
#define HPAGFCCNCHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F3610)
#define HPAGFCCNCHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F3580)
#define HPAGFCCNCHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F3570)
#define HPAGFCCNCHE_DBBLODPCIHA_OFFSET UNITYSDK_OFFSET(0x1E5F36E0)
#define HPAGFCCNCHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F38A0)
#define HPAGFCCNCHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F3700)
#define HPAGFCCNCHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F3B70)
#define HPAGFCCNCHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F3500)
#define HPAGFCCNCHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F3DA0)
#define HPAGFCCNCHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F3D10)
#define HPAGFCCNCHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F3560)
#define HPAGFCCNCHE_PKLEFEJCHPG_OFFSET UNITYSDK_OFFSET(0x1E5F36F0)
#define HPAGFCCNCHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F3BC0)
#define HPAGFCCNCHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F3C20)

inline static constexpr unsigned int HPAGFCCNCHE_TypeDefinitionIndex = 34762;

	class HPAGFCCNCHE : public ::System::Object
	{
	public:
		::HJLECIIEKGI* CMEPPEIDMOO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPAGFCCNCHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPAGFCCNCHE*>**)UnitySDK::FromName("", "HPAGFCCNCHE")->GetStaticField(0x501F0);
		}

		// static const ::System::Object CELPMCOEMLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPAGFCCNCHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPAGFCCNCHE*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPAGFCCNCHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPAGFCCNCHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPAGFCCNCHE*>*(*)())((::PBYTE)hIl2Cpp + HPAGFCCNCHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPAGFCCNCHE* Clone()
		{
			return ((::HPAGFCCNCHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_CLONE_OFFSET))(this);
		}

		::HJLECIIEKGI* DBBLODPCIHA()
		{
			return ((::HJLECIIEKGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_DBBLODPCIHA_OFFSET))(this);
		}

		::System::Void PKLEFEJCHPG(::HJLECIIEKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJLECIIEKGI*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_PKLEFEJCHPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPAGFCCNCHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPAGFCCNCHE*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPAGFCCNCHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPAGFCCNCHE*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPAGFCCNCHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
