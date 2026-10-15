#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNOLOCILBDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNOLOCILBDG_BKJJOFBNEOI_OFFSET UNITYSDK_OFFSET(0x1E1FA9D0)
#define DNOLOCILBDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FAD20)
#define DNOLOCILBDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FAFF0)
#define DNOLOCILBDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1FA970)
#define DNOLOCILBDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1FA940)
#define DNOLOCILBDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FA930)
#define DNOLOCILBDG_ENEJAIHHLDO_OFFSET UNITYSDK_OFFSET(0x1E1FA9C0)
#define DNOLOCILBDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1FAAE0)
#define DNOLOCILBDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1FAA00)
#define DNOLOCILBDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FABB0)
#define DNOLOCILBDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1FA8F0)
#define DNOLOCILBDG_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E1FA9E0)
#define DNOLOCILBDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FAE70)
#define DNOLOCILBDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FAE30)
#define DNOLOCILBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1FA920)
#define DNOLOCILBDG_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E1FA9F0)
#define DNOLOCILBDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FABE0)
#define DNOLOCILBDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FAC40)

inline static constexpr unsigned int DNOLOCILBDG_TypeDefinitionIndex = 35010;

	class DNOLOCILBDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MPFELJLKAFH; // 0x18
		::System::UInt32 JCJAAAEGIIO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DNOLOCILBDG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNOLOCILBDG*>**)UnitySDK::FromName("", "DNOLOCILBDG")->GetStaticField(0x40F30);
		}

		// static const ::System::Object NCKJJHMBKFH; // 0x0
		// static const ::System::Object CODFBJPPBGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNOLOCILBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNOLOCILBDG*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNOLOCILBDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNOLOCILBDG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNOLOCILBDG*>*(*)())((::PBYTE)hIl2Cpp + DNOLOCILBDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNOLOCILBDG* Clone()
		{
			return ((::DNOLOCILBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENEJAIHHLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_ENEJAIHHLDO_OFFSET))(this);
		}

		::System::Void BKJJOFBNEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNOLOCILBDG_BKJJOFBNEOI_OFFSET))(this, a1);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNOLOCILBDG_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNOLOCILBDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNOLOCILBDG*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNOLOCILBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNOLOCILBDG*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNOLOCILBDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
