#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DADBGKBLFGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DADBGKBLFGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11F7D0)
#define DADBGKBLFGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11FAA0)
#define DADBGKBLFGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11F420)
#define DADBGKBLFGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11F3F0)
#define DADBGKBLFGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11F3E0)
#define DADBGKBLFGM_EGCLOPOJINE_OFFSET UNITYSDK_OFFSET(0x1E11F470)
#define DADBGKBLFGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11F590)
#define DADBGKBLFGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11F4B0)
#define DADBGKBLFGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E11F4A0)
#define DADBGKBLFGM_FEBLKDMIGII_OFFSET UNITYSDK_OFFSET(0x1E11F480)
#define DADBGKBLFGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11F660)
#define DADBGKBLFGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11F3A0)
#define DADBGKBLFGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11F920)
#define DADBGKBLFGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11F8E0)
#define DADBGKBLFGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E11F490)
#define DADBGKBLFGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11F3D0)
#define DADBGKBLFGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11F690)
#define DADBGKBLFGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11F6F0)

inline static constexpr unsigned int DADBGKBLFGM_TypeDefinitionIndex = 28123;

	class DADBGKBLFGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BIIPLBKCBCB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DADBGKBLFGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DADBGKBLFGM*>**)UnitySDK::FromName("", "DADBGKBLFGM")->GetStaticField(0x21210);
		}

		// static const ::System::Object HFJINAGIMMN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DADBGKBLFGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DADBGKBLFGM*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADBGKBLFGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DADBGKBLFGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DADBGKBLFGM*>*(*)())((::PBYTE)hIl2Cpp + DADBGKBLFGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DADBGKBLFGM* Clone()
		{
			return ((::DADBGKBLFGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EGCLOPOJINE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_EGCLOPOJINE_OFFSET))(this);
		}

		::System::Void FEBLKDMIGII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DADBGKBLFGM_FEBLKDMIGII_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DADBGKBLFGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DADBGKBLFGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DADBGKBLFGM*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DADBGKBLFGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DADBGKBLFGM*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DADBGKBLFGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
