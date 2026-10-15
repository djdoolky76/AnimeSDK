#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLBKIAFNLOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLBKIAFNLOE_AOPIGIBGAML_OFFSET UNITYSDK_OFFSET(0x1E5B97E0)
#define HLBKIAFNLOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B9E50)
#define HLBKIAFNLOE_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E5B9810)
#define HLBKIAFNLOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BA1E0)
#define HLBKIAFNLOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B9790)
#define HLBKIAFNLOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B96E0)
#define HLBKIAFNLOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B9680)
#define HLBKIAFNLOE_DCBGNJCLMPF_OFFSET UNITYSDK_OFFSET(0x1E5B9800)
#define HLBKIAFNLOE_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E5B9820)
#define HLBKIAFNLOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B9950)
#define HLBKIAFNLOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B9890)
#define HLBKIAFNLOE_GCFMBGGPGMI_OFFSET UNITYSDK_OFFSET(0x1E5B9840)
#define HLBKIAFNLOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B9A90)
#define HLBKIAFNLOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B9610)
#define HLBKIAFNLOE_KFIPBAKLBPC_OFFSET UNITYSDK_OFFSET(0x1E5B9830)
#define HLBKIAFNLOE_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1E5B97F0)
#define HLBKIAFNLOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BA0A0)
#define HLBKIAFNLOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BA030)
#define HLBKIAFNLOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B9670)
#define HLBKIAFNLOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B9C10)
#define HLBKIAFNLOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B9C70)

inline static constexpr unsigned int HLBKIAFNLOE_TypeDefinitionIndex = 25744;

	class HLBKIAFNLOE : public ::System::Object
	{
	public:
		::System::String* JOBGEDKHMED; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IDKPPEBBNLC; // 0x20
		::System::UInt32 LHJILAOOJMF; // 0x28
		::System::UInt32 NBFPOGFBMFE; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_PPJIIDKOOMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLBKIAFNLOE")->GetStaticField(0x46C30);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLBKIAFNLOE")->GetStaticField(0x46C38);
		}

		// static const ::System::Object FHHACGJKPGC; // 0x0
		// static const ::System::Object EPPBJAMAMGC; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object APBIIMAEHAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLBKIAFNLOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLBKIAFNLOE*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLBKIAFNLOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLBKIAFNLOE* Clone()
		{
			return ((::HLBKIAFNLOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AOPIGIBGAML()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_AOPIGIBGAML_OFFSET))(this);
		}

		::System::UInt32 LMMJLJJDMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::Void DCBGNJCLMPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_DCBGNJCLMPF_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::String* KFIPBAKLBPC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_KFIPBAKLBPC_OFFSET))(this);
		}

		::System::Void GCFMBGGPGMI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_GCFMBGGPGMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLBKIAFNLOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLBKIAFNLOE*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLBKIAFNLOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLBKIAFNLOE*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLBKIAFNLOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
