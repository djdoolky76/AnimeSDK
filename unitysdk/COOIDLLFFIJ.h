#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOIDLLFFIJ_MCHIIFOIMEF.h"
#include "unitysdk/System/Object.h"
class COOIDLLFFIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COOIDLLFFIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10B690)
#define COOIDLLFFIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10BBC0)
#define COOIDLLFFIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10B010)
#define COOIDLLFFIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10AD50)
#define COOIDLLFFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10AD40)
#define COOIDLLFFIJ_DODMJJLOALM_OFFSET UNITYSDK_OFFSET(0x1E10AF30)
#define COOIDLLFFIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10B090)
#define COOIDLLFFIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10B060)
#define COOIDLLFFIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10B3A0)
#define COOIDLLFFIJ_HCENFHDIBMG_OFFSET UNITYSDK_OFFSET(0x1E10AF60)
#define COOIDLLFFIJ_HKOBCHJINHH_OFFSET UNITYSDK_OFFSET(0x1E10AEB0)
#define COOIDLLFFIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10AD00)
#define COOIDLLFFIJ_KHIHOBPFPFM_OFFSET UNITYSDK_OFFSET(0x1E10AFE0)
#define COOIDLLFFIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10BA00)
#define COOIDLLFFIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10B8A0)
#define COOIDLLFFIJ_NMOHKOEMDCM_OFFSET UNITYSDK_OFFSET(0x1E10B050)
#define COOIDLLFFIJ_NNADKMGDGJC_OFFSET UNITYSDK_OFFSET(0x1E10B040)
#define COOIDLLFFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10AD30)
#define COOIDLLFFIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10B450)
#define COOIDLLFFIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10B4B0)

inline static constexpr unsigned int COOIDLLFFIJ_TypeDefinitionIndex = 33814;

	class COOIDLLFFIJ : public ::System::Object
	{
	public:
		::System::Object* BEJEAKBALJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::COOIDLLFFIJ_MCHIIFOIMEF OIOELCMIGKC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::COOIDLLFFIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COOIDLLFFIJ*>**)UnitySDK::FromName("", "COOIDLLFFIJ")->GetStaticField(0x1E8E0);
		}

		// static const ::System::Object CAJPPLAJPPL; // 0x0
		// static const ::System::Object KEJACKIDEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COOIDLLFFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COOIDLLFFIJ*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COOIDLLFFIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COOIDLLFFIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COOIDLLFFIJ*>*(*)())((::PBYTE)hIl2Cpp + COOIDLLFFIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COOIDLLFFIJ* Clone()
		{
			return ((::COOIDLLFFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HKOBCHJINHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_HKOBCHJINHH_OFFSET))(this);
		}

		::System::Void DODMJJLOALM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_DODMJJLOALM_OFFSET))(this, a1);
		}

		::System::UInt32 HCENFHDIBMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_HCENFHDIBMG_OFFSET))(this);
		}

		::System::Void KHIHOBPFPFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_KHIHOBPFPFM_OFFSET))(this, a1);
		}

		::COOIDLLFFIJ_MCHIIFOIMEF NNADKMGDGJC()
		{
			return ((::COOIDLLFFIJ_MCHIIFOIMEF(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_NNADKMGDGJC_OFFSET))(this);
		}

		::System::Void NMOHKOEMDCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_NMOHKOEMDCM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COOIDLLFFIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COOIDLLFFIJ*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COOIDLLFFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COOIDLLFFIJ*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COOIDLLFFIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
