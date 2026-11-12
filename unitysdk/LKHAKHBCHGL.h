#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LKHAKHBCHGL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFE7E10)
#define LKHAKHBCHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE7E00)

inline static constexpr unsigned int LKHAKHBCHGL_TypeDefinitionIndex = 60337;

	class LKHAKHBCHGL : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CCCOEFIPOHE()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x52AE0);
		}

		static ::System::String** StaticGet_JAGAJFMALKK()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x52AE8);
		}

		static ::System::String** StaticGet_EJIDALHEIHH()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x52AF0);
		}

		static ::System::String** StaticGet_PNAOANFLFLC()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x52AF8);
		}

		static ::System::Int32* StaticGet_ICOMOIOALEG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x101F0);
		}

		static ::System::Int32* StaticGet_DOCMPOMNKNG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x101F4);
		}

		static ::System::Int32* StaticGet_COOGFCNKOJK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x101F8);
		}

		static ::System::Int32* StaticGet_HKIOMHMCEHC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x101FC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHAKHBCHGL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHAKHBCHGL_CCTOR_OFFSET))();
		}

	};
