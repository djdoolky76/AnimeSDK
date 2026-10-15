#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMDOACPHMN_EKJLIGNFENO.h"
#include "unitysdk/System/Object.h"
class ANMDOACPHMN;
class BDPHJAEBKAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANMDOACPHMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6639F0)
#define ANMDOACPHMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E663E60)
#define ANMDOACPHMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6634F0)
#define ANMDOACPHMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6633A0)
#define ANMDOACPHMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E663390)
#define ANMDOACPHMN_EMEGAAJOGPC_OFFSET UNITYSDK_OFFSET(0x1E6634D0)
#define ANMDOACPHMN_EPDBIPOJHDD_OFFSET UNITYSDK_OFFSET(0x1E663470)
#define ANMDOACPHMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6635C0)
#define ANMDOACPHMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E663560)
#define ANMDOACPHMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6637D0)
#define ANMDOACPHMN_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1E663550)
#define ANMDOACPHMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E663320)
#define ANMDOACPHMN_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1E663540)
#define ANMDOACPHMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E663C30)
#define ANMDOACPHMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E663A90)
#define ANMDOACPHMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E663380)
#define ANMDOACPHMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6638C0)
#define ANMDOACPHMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E663920)

inline static constexpr unsigned int ANMDOACPHMN_TypeDefinitionIndex = 32937;

	class ANMDOACPHMN : public ::System::Object
	{
	public:
		::System::Object* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::ANMDOACPHMN_EKJLIGNFENO NPIBMNININN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ANMDOACPHMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANMDOACPHMN*>**)UnitySDK::FromName("", "ANMDOACPHMN")->GetStaticField(0x3F7D0);
		}

		// static const ::System::Object MFMOEACOACM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANMDOACPHMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANMDOACPHMN*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMDOACPHMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANMDOACPHMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANMDOACPHMN*>*(*)())((::PBYTE)hIl2Cpp + ANMDOACPHMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANMDOACPHMN* Clone()
		{
			return ((::ANMDOACPHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_CLONE_OFFSET))(this);
		}

		::BDPHJAEBKAD* EPDBIPOJHDD()
		{
			return ((::BDPHJAEBKAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_EPDBIPOJHDD_OFFSET))(this);
		}

		::System::Void EMEGAAJOGPC(::BDPHJAEBKAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPHJAEBKAD*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_EMEGAAJOGPC_OFFSET))(this, a1);
		}

		::ANMDOACPHMN_EKJLIGNFENO KFLDFIGDABN()
		{
			return ((::ANMDOACPHMN_EKJLIGNFENO(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANMDOACPHMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANMDOACPHMN*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANMDOACPHMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANMDOACPHMN*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANMDOACPHMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
