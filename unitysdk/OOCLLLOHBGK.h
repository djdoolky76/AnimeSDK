#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNMEHOIANGN;
class OOCLLLOHBGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOCLLLOHBGK_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1DEA8BD0)
#define OOCLLLOHBGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA90E0)
#define OOCLLLOHBGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9430)
#define OOCLLLOHBGK_CINCCOBLOOC_OFFSET UNITYSDK_OFFSET(0x1DEA8BB0)
#define OOCLLLOHBGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA8AE0)
#define OOCLLLOHBGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA8A50)
#define OOCLLLOHBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8A40)
#define OOCLLLOHBGK_EKPPNLFGKHJ_OFFSET UNITYSDK_OFFSET(0x1DEA8BE0)
#define OOCLLLOHBGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA8D00)
#define OOCLLLOHBGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA8C00)
#define OOCLLLOHBGK_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1DEA8BC0)
#define OOCLLLOHBGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA8E90)
#define OOCLLLOHBGK_HGBLFLDEKJH_OFFSET UNITYSDK_OFFSET(0x1DEA8B80)
#define OOCLLLOHBGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA8A00)
#define OOCLLLOHBGK_JLELLOJIIPM_OFFSET UNITYSDK_OFFSET(0x1DEA8BF0)
#define OOCLLLOHBGK_LEDIGJDPLFE_OFFSET UNITYSDK_OFFSET(0x1DEA8BA0)
#define OOCLLLOHBGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA9360)
#define OOCLLLOHBGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA92B0)
#define OOCLLLOHBGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA8A30)
#define OOCLLLOHBGK_PMCLBJMBKEL_OFFSET UNITYSDK_OFFSET(0x1DEA8B90)
#define OOCLLLOHBGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA8EF0)
#define OOCLLLOHBGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA8F50)

inline static constexpr unsigned int OOCLLLOHBGK_TypeDefinitionIndex = 34830;

	class OOCLLLOHBGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FNMEHOIANGN* DBJLADJOMKE; // 0x18
		::System::UInt32 LCFEJAGDGOE; // 0x20
		::System::UInt32 PLBOMJNAIPM; // 0x24
		::System::UInt32 MLCHFINKHHM; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OOCLLLOHBGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOCLLLOHBGK*>**)UnitySDK::FromName("", "OOCLLLOHBGK")->GetStaticField(0x26210);
		}

		// static const ::System::Object ADCHEJFBKDL; // 0x0
		// static const ::System::Object LPINGDBBCOH; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object DKPPGPOJLHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOCLLLOHBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCLLLOHBGK*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOCLLLOHBGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOCLLLOHBGK*>*(*)())((::PBYTE)hIl2Cpp + OOCLLLOHBGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOCLLLOHBGK* Clone()
		{
			return ((::OOCLLLOHBGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CLONE_OFFSET))(this);
		}

		::FNMEHOIANGN* HGBLFLDEKJH()
		{
			return ((::FNMEHOIANGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_HGBLFLDEKJH_OFFSET))(this);
		}

		::System::Void PMCLBJMBKEL(::FNMEHOIANGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNMEHOIANGN*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_PMCLBJMBKEL_OFFSET))(this, a1);
		}

		::System::UInt32 LEDIGJDPLFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_LEDIGJDPLFE_OFFSET))(this);
		}

		::System::Void CINCCOBLOOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CINCCOBLOOC_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 EKPPNLFGKHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_EKPPNLFGKHJ_OFFSET))(this);
		}

		::System::Void JLELLOJIIPM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_JLELLOJIIPM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOCLLLOHBGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOCLLLOHBGK*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOCLLLOHBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCLLLOHBGK*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOCLLLOHBGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
