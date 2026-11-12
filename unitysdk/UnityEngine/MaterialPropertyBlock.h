#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BindlessTextureArray; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeBufferArray; }
namespace UnityEngine { class ConstantBufferArray; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET UNITYSDK_OFFSET(0x206AA080)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET UNITYSDK_OFFSET(0x206AA020)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET UNITYSDK_OFFSET(0x206A9F90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x206A9F40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET UNITYSDK_OFFSET(0x206AA130)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET UNITYSDK_OFFSET(0x206AA0A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x206AA1B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x206AA170)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET UNITYSDK_OFFSET(0x206AA000)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET UNITYSDK_OFFSET(0x206A9FA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x206AA520)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x206AA510)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET UNITYSDK_OFFSET(0x206ABE80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET UNITYSDK_OFFSET(0x206ABF00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET UNITYSDK_OFFSET(0x206ABD00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x206ABC40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET UNITYSDK_OFFSET(0x206ABB30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET UNITYSDK_OFFSET(0x206ABBB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET UNITYSDK_OFFSET(0x206AB9B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x206AB8D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x206AA4E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x206AAB10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA4F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x206AAC00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA490)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x206AA7B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA4B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x206AA9F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA4A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x206AA8D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x206AAB30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x206AA540)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET UNITYSDK_OFFSET(0x206ABF70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x206AA550)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x206AC0F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA290)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x206AA250)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x206AB510)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x206AB4D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x206AA460)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA430)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AB6B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB810)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB840)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x206AB660)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x206AA1F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x206AB3F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x206AB3C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET UNITYSDK_OFFSET(0x206AB430)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET UNITYSDK_OFFSET(0x206AB400)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x206AA480)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA450)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AB7D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB890)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB8C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x206AB780)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA300)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x206AA2A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x206AB5C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x206AB550)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x206AA310)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x206AB650)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x206AB620)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x206AA530)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x206AA470)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA440)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AB740)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB850)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB880)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x206AB6F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA240)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x206AA200)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x206AB490)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x206AB450)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x206AA500)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x206AA4D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x206AA4C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AAF10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x206AAEE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x206AAE00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x206AADD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA360)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x206AA350)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x206AA060)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x206AAD40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AAF90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x206AAF60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AAF50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x206AAF20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET UNITYSDK_OFFSET(0x206AAED0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x206AAE90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x206AA1E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA400)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AAFA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB020)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB0A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET UNITYSDK_OFFSET(0x206AB0E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x206AA560)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x206AA320)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x206A9F80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x206AAC80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET UNITYSDK_OFFSET(0x206AACF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0x206AACC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA420)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AB260)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB2E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB360)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET UNITYSDK_OFFSET(0x206AB3A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x206AA6C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA380)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x206AA370)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x206AA0F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x206AAD80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x206AA1D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x206AA3A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x206AA390)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x206AA1A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x206AAE40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x206AAE80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x206AAE10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x206AA410)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x206AB100)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x206AB180)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x206AB200)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET UNITYSDK_OFFSET(0x206AB240)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x206AA610)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x206AA340)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x206AA330)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x206A9FE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x206AAD00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET UNITYSDK_OFFSET(0x206AA1C0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlock_TypeDefinitionIndex = 4136;

	class MaterialPropertyBlock : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CTOR_OFFSET))(this);
		}

		::System::Void AddFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void AddFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void AddMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void AddTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SetRenderStateImpl(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET))(this, a1);
		}

		::System::Void SetRenderState(::UnityEngine::Rendering::RenderStateBlock a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderStateBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET))(this, a1);
		}

		::System::Void SetFlag(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET))(this, a1, a2);
		}

		::System::Single GetFloatImpl(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVectorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrixImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTextureImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET))(this, a1);
		}

		::System::Void SetFloatImpl(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorImpl(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetColorImpl(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixImpl(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextureImpl(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTextureImpl(::System::Int32 a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBindlessTextureArrayImpl(::System::Int32 a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArrayImpl(::System::Int32 a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArrayImpl(::System::Int32 a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArrayImpl(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatrixArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Single>* GetFloatArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetFloatArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetVectorArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetMatrixArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Void ExtractFloatArrayImpl(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractVectorArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractMatrixArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Void Internal_CopySHCoefficientArraysFrom(::UnityEngine::MaterialPropertyBlock* a1, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Internal_CopyProbeOcclusionArrayFrom(::UnityEngine::MaterialPropertyBlock* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr CreateImpl()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET))();
		}

		static ::System::Void DestroyImpl(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET))(a1);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET))(this);
		}

		::System::Int32 GetTypePropertyCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET))(this, a1);
		}

		::System::Void GetAllPropertyNameIDsFromScript(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetAllPropertyNamesFromScript(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloatArray(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatrixArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExtractFloatArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractVectorArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractMatrixArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_2(::System::String* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTexture_3(::System::Int32 a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetConstantBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetConstantBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBindlessTextureArray(::System::String* a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetBindlessTextureArray_1(::System::Int32 a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArray(::System::String* a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArray_1(::System::Int32 a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArray(::System::String* a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArray_1(::System::Int32 a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_3(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_4(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_3(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_4(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_3(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_4(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Single GetFloat(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Single GetFloat_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET))(this, a1);
		}

		::System::Int32 GetInt_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVector(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVector_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrix(::System::String* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrix_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTexture(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTexture_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* GetFloatArray(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* GetFloatArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET))(this, a1);
		}

		::System::Void GetFloatArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetFloatArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetVectorArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetVectorArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void CopySHCoefficientArraysFrom(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(this, a1);
		}

		::System::Void CopySHCoefficientArraysFrom_1(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET))(this, a1);
		}

		::System::Void CopySHCoefficientArraysFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopySHCoefficientArraysFrom_3(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopyProbeOcclusionArrayFrom(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(this, a1);
		}

		::System::Void CopyProbeOcclusionArrayFrom_1(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET))(this, a1);
		}

		::System::Void CopyProbeOcclusionArrayFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopyProbeOcclusionArrayFrom_3(::Il2CppArray<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetAllPropertyNameIDs(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetAllPropertyNames(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetColorImpl_Injected(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetColorImpl_Injected(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

	};
}
