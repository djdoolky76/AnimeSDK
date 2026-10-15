#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LKHAKHBCHGL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB74A910)
#define LKHAKHBCHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB74A900)

inline static constexpr unsigned int LKHAKHBCHGL_TypeDefinitionIndex = 59062;

	class LKHAKHBCHGL : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EJIDALHEIHH()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x47A00);
		}

		static ::System::String** StaticGet_CCCOEFIPOHE()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x47A08);
		}

		static ::System::String** StaticGet_JAGAJFMALKK()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x47A10);
		}

		static ::System::String** StaticGet_PNAOANFLFLC()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x47A18);
		}

		static ::System::Int32* StaticGet_ICOMOIOALEG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x11040);
		}

		static ::System::Int32* StaticGet_COOGFCNKOJK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x11044);
		}

		static ::System::Int32* StaticGet_HKIOMHMCEHC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x11048);
		}

		static ::System::Int32* StaticGet_DOCMPOMNKNG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKHAKHBCHGL")->GetStaticField(0x1104C);
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
