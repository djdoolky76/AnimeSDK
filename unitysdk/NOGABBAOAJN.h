#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOMJDGPEKOG;
class IFEABBJBIGK;
namespace System { class Action; }

#define NOGABBAOAJN_HELEGONAMAL_OFFSET UNITYSDK_OFFSET(0xBCEB980)
#define NOGABBAOAJN_PFENFNFDDOM_OFFSET UNITYSDK_OFFSET(0xBCEB910)

inline static constexpr unsigned int NOGABBAOAJN_TypeDefinitionIndex = 71115;

	class NOGABBAOAJN : public ::System::Object
	{
	public:
		static ::HOMJDGPEKOG* PFENFNFDDOM()
		{
			return ((::HOMJDGPEKOG*(*)())((::PBYTE)hIl2Cpp + NOGABBAOAJN_PFENFNFDDOM_OFFSET))();
		}

		static ::System::Void HELEGONAMAL(::IFEABBJBIGK* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::IFEABBJBIGK*, ::System::Action*))((::PBYTE)hIl2Cpp + NOGABBAOAJN_HELEGONAMAL_OFFSET))(a1, a2);
		}

	};
