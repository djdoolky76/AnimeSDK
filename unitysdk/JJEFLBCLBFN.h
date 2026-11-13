#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEFLBCLBFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJEFLBCLBFN_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1FF29AA0)
#define JJEFLBCLBFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF29E70)
#define JJEFLBCLBFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF2A1F0)
#define JJEFLBCLBFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF29A50)
#define JJEFLBCLBFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF29A10)
#define JJEFLBCLBFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF29A00)
#define JJEFLBCLBFN_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1FF29AB0)
#define JJEFLBCLBFN_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1FF29AC0)
#define JJEFLBCLBFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF29BE0)
#define JJEFLBCLBFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF29B00)
#define JJEFLBCLBFN_FMOGKJJHHCK_OFFSET UNITYSDK_OFFSET(0x1FF29AF0)
#define JJEFLBCLBFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF29CB0)
#define JJEFLBCLBFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF299C0)
#define JJEFLBCLBFN_KPAAMOLJEOJ_OFFSET UNITYSDK_OFFSET(0x1FF29AE0)
#define JJEFLBCLBFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF2A050)
#define JJEFLBCLBFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF2A000)
#define JJEFLBCLBFN_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1FF29AD0)
#define JJEFLBCLBFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF299F0)
#define JJEFLBCLBFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF29CE0)
#define JJEFLBCLBFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF29D40)

inline static constexpr unsigned int JJEFLBCLBFN_TypeDefinitionIndex = 31372;

	class JJEFLBCLBFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::UInt32 AIKAJDGKENP; // 0x1C
		::System::UInt32 KNAFJDKCPJO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JJEFLBCLBFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJEFLBCLBFN*>**)UnitySDK::FromName("", "JJEFLBCLBFN")->GetStaticField(0x44A00);
		}

		// static const ::System::Object CEFHBPCEDIF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object FNBELFNLKFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJEFLBCLBFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJEFLBCLBFN*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJEFLBCLBFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJEFLBCLBFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJEFLBCLBFN*>*(*)())((::PBYTE)hIl2Cpp + JJEFLBCLBFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJEFLBCLBFN* Clone()
		{
			return ((::JJEFLBCLBFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 KPAAMOLJEOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_KPAAMOLJEOJ_OFFSET))(this);
		}

		::System::Void FMOGKJJHHCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_FMOGKJJHHCK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJEFLBCLBFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJEFLBCLBFN*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJEFLBCLBFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJEFLBCLBFN*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJEFLBCLBFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
