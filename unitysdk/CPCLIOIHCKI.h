#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class CPCLIOIHCKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPCLIOIHCKI_ANLFEILHEMI_OFFSET UNITYSDK_OFFSET(0x1E10DA60)
#define CPCLIOIHCKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10DEB0)
#define CPCLIOIHCKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10E1B0)
#define CPCLIOIHCKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10D9C0)
#define CPCLIOIHCKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10D980)
#define CPCLIOIHCKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10D970)
#define CPCLIOIHCKI_EPDBKICDBHD_OFFSET UNITYSDK_OFFSET(0x1E10DA40)
#define CPCLIOIHCKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10DB70)
#define CPCLIOIHCKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10DA70)
#define CPCLIOIHCKI_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1E10DA10)
#define CPCLIOIHCKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10DC60)
#define CPCLIOIHCKI_HACDIGHALEH_OFFSET UNITYSDK_OFFSET(0x1E10DA50)
#define CPCLIOIHCKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10D930)
#define CPCLIOIHCKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10DFF0)
#define CPCLIOIHCKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10DFA0)
#define CPCLIOIHCKI_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1E10DA20)
#define CPCLIOIHCKI_NPIDBFDPAKP_OFFSET UNITYSDK_OFFSET(0x1E10DA30)
#define CPCLIOIHCKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10D960)
#define CPCLIOIHCKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10DC90)
#define CPCLIOIHCKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10DCF0)

inline static constexpr unsigned int CPCLIOIHCKI_TypeDefinitionIndex = 26170;

	class CPCLIOIHCKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FKNKNLGMACL CNKEBBBFBDC; // 0x18
		::System::Boolean AFOAGLMAOCB; // 0x1C
		::System::Boolean IDECCBAHKGH; // 0x1D
		static ::Google::Protobuf::MessageParser_1<::CPCLIOIHCKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPCLIOIHCKI*>**)UnitySDK::FromName("", "CPCLIOIHCKI")->GetStaticField(0x1EC40);
		}

		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object DIMFOIEAANO; // 0x0
		// static const ::System::Object LDOHGHNCAKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPCLIOIHCKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCLIOIHCKI*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPCLIOIHCKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPCLIOIHCKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPCLIOIHCKI*>*(*)())((::PBYTE)hIl2Cpp + CPCLIOIHCKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPCLIOIHCKI* Clone()
		{
			return ((::CPCLIOIHCKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_CLONE_OFFSET))(this);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::Boolean NPIDBFDPAKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_NPIDBFDPAKP_OFFSET))(this);
		}

		::System::Void EPDBKICDBHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_EPDBKICDBHD_OFFSET))(this, a1);
		}

		::System::Boolean HACDIGHALEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_HACDIGHALEH_OFFSET))(this);
		}

		::System::Void ANLFEILHEMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_ANLFEILHEMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPCLIOIHCKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPCLIOIHCKI*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPCLIOIHCKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCLIOIHCKI*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPCLIOIHCKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
