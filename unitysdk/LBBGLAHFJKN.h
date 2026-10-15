#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJCBOKGJFHE.h"
#include "unitysdk/System/Object.h"
class LBBGLAHFJKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBBGLAHFJKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A9B10)
#define LBBGLAHFJKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9E20)
#define LBBGLAHFJKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A9700)
#define LBBGLAHFJKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A96D0)
#define LBBGLAHFJKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A96C0)
#define LBBGLAHFJKN_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E8A9780)
#define LBBGLAHFJKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A98C0)
#define LBBGLAHFJKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A97B0)
#define LBBGLAHFJKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A9990)
#define LBBGLAHFJKN_GOIMIKBPKHK_OFFSET UNITYSDK_OFFSET(0x1E8A97A0)
#define LBBGLAHFJKN_HJHIAFIHHOL_OFFSET UNITYSDK_OFFSET(0x1E8A9790)
#define LBBGLAHFJKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A9650)
#define LBBGLAHFJKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A9CA0)
#define LBBGLAHFJKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A9C60)
#define LBBGLAHFJKN_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E8A9770)
#define LBBGLAHFJKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A96B0)
#define LBBGLAHFJKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A99C0)
#define LBBGLAHFJKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A9A20)

inline static constexpr unsigned int LBBGLAHFJKN_TypeDefinitionIndex = 34372;

	class LBBGLAHFJKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFKHBNCHKBI; // 0x18
		::EJCBOKGJFHE JILBEPKHINJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LBBGLAHFJKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBBGLAHFJKN*>**)UnitySDK::FromName("", "LBBGLAHFJKN")->GetStaticField(0x17180);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object AAGFFKJIINK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBBGLAHFJKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBGLAHFJKN*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBGLAHFJKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBBGLAHFJKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBBGLAHFJKN*>*(*)())((::PBYTE)hIl2Cpp + LBBGLAHFJKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBBGLAHFJKN* Clone()
		{
			return ((::LBBGLAHFJKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::EJCBOKGJFHE HJHIAFIHHOL()
		{
			return ((::EJCBOKGJFHE(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_HJHIAFIHHOL_OFFSET))(this);
		}

		::System::Void GOIMIKBPKHK(::EJCBOKGJFHE a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJCBOKGJFHE))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_GOIMIKBPKHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBBGLAHFJKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBBGLAHFJKN*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBBGLAHFJKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBGLAHFJKN*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBBGLAHFJKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
