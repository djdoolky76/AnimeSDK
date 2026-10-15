#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFCDIIJKIJC;
class FPNCFGCJNJL_EEGAKEAECHN;
namespace System { class Object; }
namespace UnityEngine { class Component; }

#define FPNCFGCJNJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159166B0)
#define FPNCFGCJNJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159166E0)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_0_OFFSET UNITYSDK_OFFSET(0x159166F0)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_1_OFFSET UNITYSDK_OFFSET(0x15916760)
#define FPNCFGCJNJL___C__LOADPROCESSORS_B__6_2_OFFSET UNITYSDK_OFFSET(0x159167E0)

inline static constexpr unsigned int FPNCFGCJNJL___c_TypeDefinitionIndex = 49085;

	class FPNCFGCJNJL___c : public ::System::Object
	{
	public:
		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_1()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55040);
		}

		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_2()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55048);
		}

		static ::FPNCFGCJNJL_EEGAKEAECHN** StaticGet___9__6_0()
		{
			return (::FPNCFGCJNJL_EEGAKEAECHN**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55050);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55058);
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
