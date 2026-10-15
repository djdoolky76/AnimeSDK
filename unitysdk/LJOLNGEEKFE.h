#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class LJOLNGEEKFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJOLNGEEKFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E989350)
#define LJOLNGEEKFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E989650)
#define LJOLNGEEKFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E988D70)
#define LJOLNGEEKFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E988CF0)
#define LJOLNGEEKFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988CE0)
#define LJOLNGEEKFE_EHDKAEJOCNL_OFFSET UNITYSDK_OFFSET(0x1E988E30)
#define LJOLNGEEKFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E989020)
#define LJOLNGEEKFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E988E60)
#define LJOLNGEEKFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9891A0)
#define LJOLNGEEKFE_HKKHOALNAGJ_OFFSET UNITYSDK_OFFSET(0x1E988E50)
#define LJOLNGEEKFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E988C70)
#define LJOLNGEEKFE_JNGDABPMGIA_OFFSET UNITYSDK_OFFSET(0x1E988E20)
#define LJOLNGEEKFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E989470)
#define LJOLNGEEKFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9893B0)
#define LJOLNGEEKFE_NKIGFFMNBFJ_OFFSET UNITYSDK_OFFSET(0x1E988E40)
#define LJOLNGEEKFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E988CD0)
#define LJOLNGEEKFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9891E0)
#define LJOLNGEEKFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E989240)

	class LJOLNGEEKFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EPBMGIOIHEI* LLNBEBKIOLH; // 0x18
		::System::Boolean NAAKHDIOOOD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJOLNGEEKFE")->GetStaticField(0x3DE50);
		}

		// static const ::System::Object DLFLLLJJOKD; // 0x0
		// static const ::System::Object FAODBPBHHDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJOLNGEEKFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOLNGEEKFE*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOLNGEEKFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJOLNGEEKFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJOLNGEEKFE* Clone()
		{
			return ((::LJOLNGEEKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_CLONE_OFFSET))(this);
		}

		::EPBMGIOIHEI* JNGDABPMGIA()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_JNGDABPMGIA_OFFSET))(this);
		}

		::System::Void EHDKAEJOCNL(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_EHDKAEJOCNL_OFFSET))(this, a1);
		}

		::System::Boolean NKIGFFMNBFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_NKIGFFMNBFJ_OFFSET))(this);
		}

		::System::Void HKKHOALNAGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_HKKHOALNAGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJOLNGEEKFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJOLNGEEKFE*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJOLNGEEKFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJOLNGEEKFE*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJOLNGEEKFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
