#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOODKHEFJHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOODKHEFJHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F3B20)
#define GOODKHEFJHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3EA0)
#define GOODKHEFJHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F3700)
#define GOODKHEFJHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F36C0)
#define GOODKHEFJHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F36B0)
#define GOODKHEFJHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F3890)
#define GOODKHEFJHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F37B0)
#define GOODKHEFJHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F3960)
#define GOODKHEFJHJ_HNOBPDHOBHI_OFFSET UNITYSDK_OFFSET(0x1E4F3790)
#define GOODKHEFJHJ_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E4F3750)
#define GOODKHEFJHJ_JAIBDNHIIEP_OFFSET UNITYSDK_OFFSET(0x1E4F3770)
#define GOODKHEFJHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F3670)
#define GOODKHEFJHJ_JJMGEONCGIO_OFFSET UNITYSDK_OFFSET(0x1E4F37A0)
#define GOODKHEFJHJ_LHHNFAAPDNJ_OFFSET UNITYSDK_OFFSET(0x1E4F3780)
#define GOODKHEFJHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F3D00)
#define GOODKHEFJHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F3CB0)
#define GOODKHEFJHJ_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E4F3760)
#define GOODKHEFJHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F36A0)
#define GOODKHEFJHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F3990)
#define GOODKHEFJHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F39F0)

inline static constexpr unsigned int GOODKHEFJHJ_TypeDefinitionIndex = 29791;

	class GOODKHEFJHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		::System::UInt32 GOALAEOMMAL; // 0x1C
		::System::UInt32 HCEBEMOCOPC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GOODKHEFJHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOODKHEFJHJ*>**)UnitySDK::FromName("", "GOODKHEFJHJ")->GetStaticField(0x2B560);
		}

		// static const ::System::Object EBNBMOHHABN; // 0x0
		// static const ::System::Object EMDNBPGMNCO; // 0x0
		// static const ::System::Object PNOGLEKIAOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOODKHEFJHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOODKHEFJHJ*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOODKHEFJHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOODKHEFJHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOODKHEFJHJ*>*(*)())((::PBYTE)hIl2Cpp + GOODKHEFJHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOODKHEFJHJ* Clone()
		{
			return ((::GOODKHEFJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::UInt32 JAIBDNHIIEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_JAIBDNHIIEP_OFFSET))(this);
		}

		::System::Void LHHNFAAPDNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_LHHNFAAPDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 HNOBPDHOBHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_HNOBPDHOBHI_OFFSET))(this);
		}

		::System::Void JJMGEONCGIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_JJMGEONCGIO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOODKHEFJHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOODKHEFJHJ*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOODKHEFJHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOODKHEFJHJ*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOODKHEFJHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
