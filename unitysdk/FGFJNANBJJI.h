#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFJNANBJJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGFJNANBJJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E37C540)
#define FGFJNANBJJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37C7A0)
#define FGFJNANBJJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E37C150)
#define FGFJNANBJJI_COENGLIFPNL_OFFSET UNITYSDK_OFFSET(0x1E37C1B0)
#define FGFJNANBJJI_COMIFJEKJGO_OFFSET UNITYSDK_OFFSET(0x1E37C1A0)
#define FGFJNANBJJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E37C110)
#define FGFJNANBJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37C100)
#define FGFJNANBJJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E37C2C0)
#define FGFJNANBJJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E37C1E0)
#define FGFJNANBJJI_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1E37C1C0)
#define FGFJNANBJJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E37C3A0)
#define FGFJNANBJJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E37C0C0)
#define FGFJNANBJJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E37C620)
#define FGFJNANBJJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E37C5E0)
#define FGFJNANBJJI_OIKMPONNKIC_OFFSET UNITYSDK_OFFSET(0x1E37C1D0)
#define FGFJNANBJJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E37C0F0)
#define FGFJNANBJJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E37C3D0)
#define FGFJNANBJJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E37C430)

inline static constexpr unsigned int FGFJNANBJJI_TypeDefinitionIndex = 31336;

	class FGFJNANBJJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BHIOIACINGE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 JLCEBANGOGI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FGFJNANBJJI")->GetStaticField(0x2DD90);
		}

		// static const ::System::Object BIEDPMPJFBN; // 0x0
		// static const ::System::Object MIEPCHJAJBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGFJNANBJJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFJNANBJJI*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFJNANBJJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FGFJNANBJJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGFJNANBJJI* Clone()
		{
			return ((::FGFJNANBJJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 COMIFJEKJGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_COMIFJEKJGO_OFFSET))(this);
		}

		::System::Void COENGLIFPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGFJNANBJJI_COENGLIFPNL_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Void OIKMPONNKIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGFJNANBJJI_OIKMPONNKIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGFJNANBJJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGFJNANBJJI*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFJNANBJJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGFJNANBJJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFJNANBJJI*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGFJNANBJJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
