#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMEFGANLKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDMEFGANLKI_BAGCCAKCIFD_OFFSET UNITYSDK_OFFSET(0x1E7D5FD0)
#define KDMEFGANLKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D63F0)
#define KDMEFGANLKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D67B0)
#define KDMEFGANLKI_CFGFDLGNHHI_OFFSET UNITYSDK_OFFSET(0x1E7D5FA0)
#define KDMEFGANLKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D5F50)
#define KDMEFGANLKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D5F10)
#define KDMEFGANLKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5F00)
#define KDMEFGANLKI_ECNKCIHDAFP_OFFSET UNITYSDK_OFFSET(0x1E7D5FB0)
#define KDMEFGANLKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D60E0)
#define KDMEFGANLKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D6000)
#define KDMEFGANLKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D61B0)
#define KDMEFGANLKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D5EC0)
#define KDMEFGANLKI_JJMMHAAPLCJ_OFFSET UNITYSDK_OFFSET(0x1E7D5FC0)
#define KDMEFGANLKI_KEAKLFKNNPP_OFFSET UNITYSDK_OFFSET(0x1E7D5FF0)
#define KDMEFGANLKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D65F0)
#define KDMEFGANLKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D65A0)
#define KDMEFGANLKI_NNFKKOEOFPD_OFFSET UNITYSDK_OFFSET(0x1E7D5FE0)
#define KDMEFGANLKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5EF0)
#define KDMEFGANLKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D61E0)
#define KDMEFGANLKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D6240)

inline static constexpr unsigned int KDMEFGANLKI_TypeDefinitionIndex = 25358;

	class KDMEFGANLKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 KFNMMILCBFP; // 0x18
		::System::Int32 EIKLKDGDLEG; // 0x1C
		::System::Int32 IOCAJCJJGOM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KDMEFGANLKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDMEFGANLKI*>**)UnitySDK::FromName("", "KDMEFGANLKI")->GetStaticField(0x109A0);
		}

		// static const ::System::Object PLAGKJDJGBN; // 0x0
		// static const ::System::Object OAPJNMPOKHB; // 0x0
		// static const ::System::Object MAIOIAOEKKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMEFGANLKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDMEFGANLKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDMEFGANLKI*>*(*)())((::PBYTE)hIl2Cpp + KDMEFGANLKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDMEFGANLKI* Clone()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_CLONE_OFFSET))(this);
		}

		::System::Int32 CFGFDLGNHHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_CFGFDLGNHHI_OFFSET))(this);
		}

		::System::Void ECNKCIHDAFP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDMEFGANLKI_ECNKCIHDAFP_OFFSET))(this, a1);
		}

		::System::Int32 JJMMHAAPLCJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_JJMMHAAPLCJ_OFFSET))(this);
		}

		::System::Void BAGCCAKCIFD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDMEFGANLKI_BAGCCAKCIFD_OFFSET))(this, a1);
		}

		::System::Int32 NNFKKOEOFPD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_NNFKKOEOFPD_OFFSET))(this);
		}

		::System::Void KEAKLFKNNPP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDMEFGANLKI_KEAKLFKNNPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDMEFGANLKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDMEFGANLKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
