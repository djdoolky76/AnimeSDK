#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
class MDDFDNHFCIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDDFDNHFCIL_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E9FD200)
#define MDDFDNHFCIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9FD6A0)
#define MDDFDNHFCIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FDA60)
#define MDDFDNHFCIL_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E9FD210)
#define MDDFDNHFCIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9FD150)
#define MDDFDNHFCIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9FD0D0)
#define MDDFDNHFCIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FD0C0)
#define MDDFDNHFCIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9FD3A0)
#define MDDFDNHFCIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9FD220)
#define MDDFDNHFCIL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9FD1F0)
#define MDDFDNHFCIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9FD520)
#define MDDFDNHFCIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9FD080)
#define MDDFDNHFCIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9FD860)
#define MDDFDNHFCIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9FD770)
#define MDDFDNHFCIL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9FD1E0)
#define MDDFDNHFCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9FD0B0)
#define MDDFDNHFCIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9FD560)
#define MDDFDNHFCIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9FD5C0)

	class MDDFDNHFCIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDDFDNHFCIL")->GetStaticField(0x48B00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAHAEFHMLHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDDFDNHFCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDDFDNHFCIL*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDDFDNHFCIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDDFDNHFCIL* Clone()
		{
			return ((::MDDFDNHFCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDDFDNHFCIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDDFDNHFCIL*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDDFDNHFCIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDDFDNHFCIL*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDDFDNHFCIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
