#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CELLCCKJIGL;
namespace System { class Object; }

#define CELLCCKJIGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09B8A0)
#define CELLCCKJIGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09B8E0)
#define CELLCCKJIGL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E09B8F0)

inline static constexpr unsigned int CELLCCKJIGL___c_TypeDefinitionIndex = 28695;

	class CELLCCKJIGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x127A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELLCCKJIGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELLCCKJIGL___C_CTOR_OFFSET))(this);
		}

		::CELLCCKJIGL* __cctor_b__53_0()
		{
			return ((::CELLCCKJIGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELLCCKJIGL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
