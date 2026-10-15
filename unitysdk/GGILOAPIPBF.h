#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILBJDAJPAA.h"
#include "unitysdk/System/Object.h"
class GGILOAPIPBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGILOAPIPBF_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E4509A0)
#define GGILOAPIPBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E450D10)
#define GGILOAPIPBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E451020)
#define GGILOAPIPBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E450950)
#define GGILOAPIPBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E450920)
#define GGILOAPIPBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E450910)
#define GGILOAPIPBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E450AC0)
#define GGILOAPIPBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4509E0)
#define GGILOAPIPBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E450B90)
#define GGILOAPIPBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4508D0)
#define GGILOAPIPBF_LMKEDKMBKIC_OFFSET UNITYSDK_OFFSET(0x1E4509D0)
#define GGILOAPIPBF_MCCMOFCCMHI_OFFSET UNITYSDK_OFFSET(0x1E4509C0)
#define GGILOAPIPBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E450EA0)
#define GGILOAPIPBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E450E60)
#define GGILOAPIPBF_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E4509B0)
#define GGILOAPIPBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E450900)
#define GGILOAPIPBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E450BC0)
#define GGILOAPIPBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E450C20)

inline static constexpr unsigned int GGILOAPIPBF_TypeDefinitionIndex = 31362;

	class GGILOAPIPBF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGDIKGKCCFN; // 0x18
		::FILBJDAJPAA PACOOECNLEA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GGILOAPIPBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGILOAPIPBF*>**)UnitySDK::FromName("", "GGILOAPIPBF")->GetStaticField(0x159B0);
		}

		// static const ::System::Object CLJJLLDPMBN; // 0x0
		// static const ::System::Object HOFOCEKHOJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGILOAPIPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGILOAPIPBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGILOAPIPBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGILOAPIPBF*>*(*)())((::PBYTE)hIl2Cpp + GGILOAPIPBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGILOAPIPBF* Clone()
		{
			return ((::GGILOAPIPBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGILOAPIPBF_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::FILBJDAJPAA MCCMOFCCMHI()
		{
			return ((::FILBJDAJPAA(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MCCMOFCCMHI_OFFSET))(this);
		}

		::System::Void LMKEDKMBKIC(::FILBJDAJPAA a1)
		{
			return ((::System::Void(*)(::PVOID, ::FILBJDAJPAA))((::PBYTE)hIl2Cpp + GGILOAPIPBF_LMKEDKMBKIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGILOAPIPBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGILOAPIPBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGILOAPIPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGILOAPIPBF*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGILOAPIPBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
