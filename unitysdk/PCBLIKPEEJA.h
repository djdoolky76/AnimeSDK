#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCLACMHKMFO.h"
#include "unitysdk/System/Object.h"
class LMLNJFEMOAI;
class PCBLIKPEEJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCBLIKPEEJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF00E70)
#define PCBLIKPEEJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF012B0)
#define PCBLIKPEEJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF00930)
#define PCBLIKPEEJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF00860)
#define PCBLIKPEEJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF00810)
#define PCBLIKPEEJA_DDDKKJGHFHO_OFFSET UNITYSDK_OFFSET(0x1DF00A00)
#define PCBLIKPEEJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF00A70)
#define PCBLIKPEEJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF00A10)
#define PCBLIKPEEJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF00B20)
#define PCBLIKPEEJA_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1DF00990)
#define PCBLIKPEEJA_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1DF009E0)
#define PCBLIKPEEJA_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1DF00980)
#define PCBLIKPEEJA_IPLJHFBNIEJ_OFFSET UNITYSDK_OFFSET(0x1DF009A0)
#define PCBLIKPEEJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF007A0)
#define PCBLIKPEEJA_JKPKNEPBAKE_OFFSET UNITYSDK_OFFSET(0x1DF009F0)
#define PCBLIKPEEJA_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1DF009D0)
#define PCBLIKPEEJA_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1DF009C0)
#define PCBLIKPEEJA_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1DF009B0)
#define PCBLIKPEEJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF01190)
#define PCBLIKPEEJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF010C0)
#define PCBLIKPEEJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF00800)
#define PCBLIKPEEJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF00BA0)
#define PCBLIKPEEJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF00C00)

inline static constexpr unsigned int PCBLIKPEEJA_TypeDefinitionIndex = 25760;

	class PCBLIKPEEJA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNJFEMOAI*>* BLIHAOKCNJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean PLMELBJCPPP; // 0x20
		::System::Byte _padding0[0x3];
		::OCLACMHKMFO CPHKLPMPADB; // 0x24
		::System::UInt32 HJEGLCJEOKC; // 0x28
		::System::UInt32 GDPGCPKEFKH; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_FPNMMDHGFBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PCBLIKPEEJA")->GetStaticField(0x34720);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PCBLIKPEEJA")->GetStaticField(0x34728);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		// static const ::System::Object DGIOFPBGOMF; // 0x0
		// static const ::System::Object MCCPOKCDGKE; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object JCKMMMNMLNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCBLIKPEEJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBLIKPEEJA*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCBLIKPEEJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PCBLIKPEEJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCBLIKPEEJA* Clone()
		{
			return ((::PCBLIKPEEJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNJFEMOAI*>* IPLJHFBNIEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNJFEMOAI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_IPLJHFBNIEJ_OFFSET))(this);
		}

		::OCLACMHKMFO MCKAAMENFCE()
		{
			return ((::OCLACMHKMFO(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::OCLACMHKMFO a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCLACMHKMFO))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean JKPKNEPBAKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_JKPKNEPBAKE_OFFSET))(this);
		}

		::System::Void DDDKKJGHFHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_DDDKKJGHFHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCBLIKPEEJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCBLIKPEEJA*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCBLIKPEEJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBLIKPEEJA*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCBLIKPEEJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
