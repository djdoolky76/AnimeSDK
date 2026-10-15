#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFBKJFLGFJ_EMCBIBNEPBL.h"
#include "unitysdk/System/Object.h"
class HAFBKJFLGFJ;
class LHLBFIOLAIA;
class PBJGJDBAICF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HAFBKJFLGFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E503870)
#define HAFBKJFLGFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E503FA0)
#define HAFBKJFLGFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E503170)
#define HAFBKJFLGFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E502F10)
#define HAFBKJFLGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E502F00)
#define HAFBKJFLGFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E503240)
#define HAFBKJFLGFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5031E0)
#define HAFBKJFLGFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E503590)
#define HAFBKJFLGFJ_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E5031D0)
#define HAFBKJFLGFJ_IABKIBJNNCA_OFFSET UNITYSDK_OFFSET(0x1E503150)
#define HAFBKJFLGFJ_JHJLCMMFILH_OFFSET UNITYSDK_OFFSET(0x1E5030D0)
#define HAFBKJFLGFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E502E90)
#define HAFBKJFLGFJ_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E5031C0)
#define HAFBKJFLGFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E503C70)
#define HAFBKJFLGFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5039C0)
#define HAFBKJFLGFJ_OKNIKOBJJEP_OFFSET UNITYSDK_OFFSET(0x1E503070)
#define HAFBKJFLGFJ_ONFLAHNAHKF_OFFSET UNITYSDK_OFFSET(0x1E5030F0)
#define HAFBKJFLGFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E502EF0)
#define HAFBKJFLGFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5036B0)
#define HAFBKJFLGFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E503710)

inline static constexpr unsigned int HAFBKJFLGFJ_TypeDefinitionIndex = 26793;

	class HAFBKJFLGFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* JEFEMOPFJOP; // 0x18
		::HAFBKJFLGFJ_EMCBIBNEPBL NPIBMNININN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HAFBKJFLGFJ")->GetStaticField(0x2C8D0);
		}

		// static const ::System::Object CDKCKDGIHLH; // 0x0
		// static const ::System::Object JAIOCFMOGLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAFBKJFLGFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAFBKJFLGFJ*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAFBKJFLGFJ* Clone()
		{
			return ((::HAFBKJFLGFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_CLONE_OFFSET))(this);
		}

		::LHLBFIOLAIA* OKNIKOBJJEP()
		{
			return ((::LHLBFIOLAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_OKNIKOBJJEP_OFFSET))(this);
		}

		::System::Void JHJLCMMFILH(::LHLBFIOLAIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLBFIOLAIA*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_JHJLCMMFILH_OFFSET))(this, a1);
		}

		::PBJGJDBAICF* ONFLAHNAHKF()
		{
			return ((::PBJGJDBAICF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_ONFLAHNAHKF_OFFSET))(this);
		}

		::System::Void IABKIBJNNCA(::PBJGJDBAICF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBJGJDBAICF*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_IABKIBJNNCA_OFFSET))(this, a1);
		}

		::HAFBKJFLGFJ_EMCBIBNEPBL KFLDFIGDABN()
		{
			return ((::HAFBKJFLGFJ_EMCBIBNEPBL(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAFBKJFLGFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAFBKJFLGFJ*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAFBKJFLGFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAFBKJFLGFJ*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
