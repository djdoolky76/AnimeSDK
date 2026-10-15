#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHALBFPDLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGHALBFPDLO_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E70BE10)
#define JGHALBFPDLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70C170)
#define JGHALBFPDLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70C390)
#define JGHALBFPDLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70BDC0)
#define JGHALBFPDLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70BD90)
#define JGHALBFPDLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70BD80)
#define JGHALBFPDLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70BEF0)
#define JGHALBFPDLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70BE20)
#define JGHALBFPDLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70C060)
#define JGHALBFPDLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70BD40)
#define JGHALBFPDLO_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E70BE00)
#define JGHALBFPDLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70C230)
#define JGHALBFPDLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70C200)
#define JGHALBFPDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70BD70)
#define JGHALBFPDLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70C090)
#define JGHALBFPDLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70C0F0)

inline static constexpr unsigned int JGHALBFPDLO_TypeDefinitionIndex = 33386;

	class JGHALBFPDLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKMEMBIPHAN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGHALBFPDLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGHALBFPDLO*>**)UnitySDK::FromName("", "JGHALBFPDLO")->GetStaticField(0x5E490);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGHALBFPDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHALBFPDLO*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHALBFPDLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGHALBFPDLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGHALBFPDLO*>*(*)())((::PBYTE)hIl2Cpp + JGHALBFPDLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGHALBFPDLO* Clone()
		{
			return ((::JGHALBFPDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGHALBFPDLO_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGHALBFPDLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGHALBFPDLO*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHALBFPDLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGHALBFPDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHALBFPDLO*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGHALBFPDLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
