#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFCDIIJKIJC;
class FPNCFGCJNJL_EEGAKEAECHN;
namespace System { class Object; }
namespace UnityEngine { class Component; }

#define FPNCFGCJNJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15921710)
#define FPNCFGCJNJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15921740)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_0_OFFSET UNITYSDK_OFFSET(0x15921750)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_1_OFFSET UNITYSDK_OFFSET(0x159217C0)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_2_OFFSET UNITYSDK_OFFSET(0x15921840)

	class FPNCFGCJNJL___c : public ::System::Object
	{
	public:
		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_2()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF80);
		}

		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_1()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF90);
		}

		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_0()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNCFGCJNJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCFGCJNJL___C_CTOR_OFFSET))(this);
		}

		::DFCDIIJKIJC* _LoadProcessors_b__6_0(::UnityEngine::Component* a1)
		{
			return ((::DFCDIIJKIJC*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL___C__LOADPROCESSORS_B__6_0_OFFSET))(this, a1);
		}

		::DFCDIIJKIJC* _LoadProcessors_b__6_1(::UnityEngine::Component* a1)
		{
			return ((::DFCDIIJKIJC*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL___C__LOADPROCESSORS_B__6_1_OFFSET))(this, a1);
		}

		::DFCDIIJKIJC* _LoadProcessors_b__6_2(::UnityEngine::Component* a1)
		{
			return ((::DFCDIIJKIJC*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL___C__LOADPROCESSORS_B__6_2_OFFSET))(this, a1);
		}

	};
