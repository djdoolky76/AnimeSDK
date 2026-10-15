#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIGKPHPELI;
class OHCFIOOIKND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJIGKPHPELI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86D720)
#define KJIGKPHPELI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86DB20)
#define KJIGKPHPELI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86D140)
#define KJIGKPHPELI_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1E86D1C0)
#define KJIGKPHPELI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86D0D0)
#define KJIGKPHPELI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86D0C0)
#define KJIGKPHPELI_DNAIFBALHJA_OFFSET UNITYSDK_OFFSET(0x1E86D200)
#define KJIGKPHPELI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86D3B0)
#define KJIGKPHPELI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86D220)
#define KJIGKPHPELI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E86D1F0)
#define KJIGKPHPELI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86D540)
#define KJIGKPHPELI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86D080)
#define KJIGKPHPELI_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1E86D1D0)
#define KJIGKPHPELI_LPFAOFNKIIJ_OFFSET UNITYSDK_OFFSET(0x1E86D210)
#define KJIGKPHPELI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86D920)
#define KJIGKPHPELI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86D860)
#define KJIGKPHPELI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E86D1E0)
#define KJIGKPHPELI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86D0B0)
#define KJIGKPHPELI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86D580)
#define KJIGKPHPELI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86D5E0)

	class KJIGKPHPELI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OHCFIOOIKND* EMBOGJHHDBP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 FENDJMNOHHG; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJIGKPHPELI")->GetStaticField(0x1C910);
		}

		// static const ::System::Object FILPGLHFNCI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BHKADDMLEKC; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJIGKPHPELI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJIGKPHPELI* Clone()
		{
			return ((::KJIGKPHPELI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_CLONE_OFFSET))(this);
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

		::OHCFIOOIKND* DNAIFBALHJA()
		{
			return ((::OHCFIOOIKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI_DNAIFBALHJA_OFFSET))(this);
		}

		::System::Void LPFAOFNKIIJ(::OHCFIOOIKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHCFIOOIKND*))((::PBYTE)hIl2Cpp + KJIGKPHPELI_LPFAOFNKIIJ_OFFSET))(this, a1);
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
