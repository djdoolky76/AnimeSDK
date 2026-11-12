#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIGKPHPELI;
class OHCFIOOIKND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJIGKPHPELI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB88150)
#define KJIGKPHPELI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB88570)
#define KJIGKPHPELI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB87B50)
#define KJIGKPHPELI_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1FB87C00)
#define KJIGKPHPELI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB87AD0)
#define KJIGKPHPELI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB87AC0)
#define KJIGKPHPELI_DNAIFBALHJA_OFFSET UNITYSDK_OFFSET(0x1FB87BE0)
#define KJIGKPHPELI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB87DD0)
#define KJIGKPHPELI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB87C40)
#define KJIGKPHPELI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB87C30)
#define KJIGKPHPELI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB87F60)
#define KJIGKPHPELI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB87A80)
#define KJIGKPHPELI_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1FB87C10)
#define KJIGKPHPELI_LPFAOFNKIIJ_OFFSET UNITYSDK_OFFSET(0x1FB87BF0)
#define KJIGKPHPELI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB88370)
#define KJIGKPHPELI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB882B0)
#define KJIGKPHPELI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB87C20)
#define KJIGKPHPELI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB87AB0)
#define KJIGKPHPELI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB87FB0)
#define KJIGKPHPELI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB88010)

inline static constexpr unsigned int KJIGKPHPELI_TypeDefinitionIndex = 35496;

	class KJIGKPHPELI : public ::System::Object
	{
	public:
		::OHCFIOOIKND* EMBOGJHHDBP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 FENDJMNOHHG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KJIGKPHPELI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJIGKPHPELI*>**)UnitySDK::FromName("", "KJIGKPHPELI")->GetStaticField(0x15130);
		}

		// static const ::System::Object BHKADDMLEKC; // 0x0
		// static const ::System::Object FILPGLHFNCI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJIGKPHPELI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJIGKPHPELI*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJIGKPHPELI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJIGKPHPELI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJIGKPHPELI*>*(*)())((::PBYTE)hIl2Cpp + KJIGKPHPELI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJIGKPHPELI* Clone()
		{
			return ((::KJIGKPHPELI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CLONE_OFFSET))(this);
		}

		::OHCFIOOIKND* DNAIFBALHJA()
		{
			return ((::OHCFIOOIKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_DNAIFBALHJA_OFFSET))(this);
		}

		::System::Void LPFAOFNKIIJ(::OHCFIOOIKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHCFIOOIKND*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_LPFAOFNKIIJ_OFFSET))(this, a1);
		}

		::System::UInt32 CPOOIDGKFPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CPOOIDGKFPB_OFFSET))(this);
		}

		::System::Void KHNLEEDIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJIGKPHPELI_KHNLEEDIEKB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJIGKPHPELI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJIGKPHPELI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJIGKPHPELI*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJIGKPHPELI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJIGKPHPELI*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
