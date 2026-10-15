#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPIBAIPJCMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPIBAIPJCMD_AMLIFIFMLMK_OFFSET UNITYSDK_OFFSET(0x1E3DCFF0)
#define FPIBAIPJCMD_BMKMGLKIKMK_OFFSET UNITYSDK_OFFSET(0x1E3DCFB0)
#define FPIBAIPJCMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DD3D0)
#define FPIBAIPJCMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD6E0)
#define FPIBAIPJCMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DCF50)
#define FPIBAIPJCMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DCF10)
#define FPIBAIPJCMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCF00)
#define FPIBAIPJCMD_DAPDMLHGCFJ_OFFSET UNITYSDK_OFFSET(0x1E3DCFA0)
#define FPIBAIPJCMD_DDCLKHNJHHN_OFFSET UNITYSDK_OFFSET(0x1E3DCFE0)
#define FPIBAIPJCMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DD0F0)
#define FPIBAIPJCMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DD000)
#define FPIBAIPJCMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DD1D0)
#define FPIBAIPJCMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DCEC0)
#define FPIBAIPJCMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DD540)
#define FPIBAIPJCMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DD4F0)
#define FPIBAIPJCMD_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E3DCFD0)
#define FPIBAIPJCMD_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E3DCFC0)
#define FPIBAIPJCMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCEF0)
#define FPIBAIPJCMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DD200)
#define FPIBAIPJCMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DD260)

inline static constexpr unsigned int FPIBAIPJCMD_TypeDefinitionIndex = 29767;

	class FPIBAIPJCMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		::System::Boolean PLACLHGPBNH; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 OLLHBHENKHN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FPIBAIPJCMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPIBAIPJCMD*>**)UnitySDK::FromName("", "FPIBAIPJCMD")->GetStaticField(0x59C40);
		}

		// static const ::System::Object DOIGPKGEKFB; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object KNGCCLCIOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPIBAIPJCMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPIBAIPJCMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPIBAIPJCMD*>*(*)())((::PBYTE)hIl2Cpp + FPIBAIPJCMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPIBAIPJCMD* Clone()
		{
			return ((::FPIBAIPJCMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CLONE_OFFSET))(this);
		}

		::System::Boolean DAPDMLHGCFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_DAPDMLHGCFJ_OFFSET))(this);
		}

		::System::Void BMKMGLKIKMK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_BMKMGLKIKMK_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 DDCLKHNJHHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_DDCLKHNJHHN_OFFSET))(this);
		}

		::System::Void AMLIFIFMLMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_AMLIFIFMLMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPIBAIPJCMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPIBAIPJCMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPIBAIPJCMD*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPIBAIPJCMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
