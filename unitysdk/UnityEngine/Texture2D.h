#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x2073F2B0)
#define UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x207407B0)
#define UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x20740800)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0x20740760)
#define UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F580)
#define UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F560)
#define UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET UNITYSDK_OFFSET(0x2073F210)
#define UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073FC20)
#define UNITYENGINE_TEXTURE2D_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2073F760)
#define UNITYENGINE_TEXTURE2D_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2073F830)
#define UNITYENGINE_TEXTURE2D_CTOR_3_OFFSET UNITYSDK_OFFSET(0x2073F900)
#define UNITYENGINE_TEXTURE2D_CTOR_4_OFFSET UNITYSDK_OFFSET(0x2073F9B0)
#define UNITYENGINE_TEXTURE2D_CTOR_5_OFFSET UNITYSDK_OFFSET(0x2073FAA0)
#define UNITYENGINE_TEXTURE2D_CTOR_6_OFFSET UNITYSDK_OFFSET(0x2073FAD0)
#define UNITYENGINE_TEXTURE2D_CTOR_7_OFFSET UNITYSDK_OFFSET(0x2073FB10)
#define UNITYENGINE_TEXTURE2D_CTOR_8_OFFSET UNITYSDK_OFFSET(0x2073FB50)
#define UNITYENGINE_TEXTURE2D_CTOR_OFFSET UNITYSDK_OFFSET(0x2073F6B0)
#define UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET UNITYSDK_OFFSET(0x2073F450)
#define UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET UNITYSDK_OFFSET(0x20740A50)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x2073F390)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET UNITYSDK_OFFSET(0x2073F350)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET UNITYSDK_OFFSET(0x20740460)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0x207403B0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x2073F340)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x2073F2F0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_1_OFFSET UNITYSDK_OFFSET(0x20741040)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_2_OFFSET UNITYSDK_OFFSET(0x207410F0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x2073F630)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x2073F650)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0x2073F640)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_1_OFFSET UNITYSDK_OFFSET(0x20740D40)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_2_OFFSET UNITYSDK_OFFSET(0x20740DF0)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_3_OFFSET UNITYSDK_OFFSET(0x20740EC0)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_OFFSET UNITYSDK_OFFSET(0x2073F620)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x2073F600)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x20740F80)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x20740FE0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x2073F5F0)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x20740310)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0x207402A0)
#define UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET UNITYSDK_OFFSET(0x2073F440)
#define UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x2073F5E0)
#define UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x2073F430)
#define UNITYENGINE_TEXTURE2D_GET_ALLOWGLOBALMIPBIAS_OFFSET UNITYSDK_OFFSET(0x2073F480)
#define UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F1C0)
#define UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F520)
#define UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F530)
#define UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x2073F1A0)
#define UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F1E0)
#define UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET UNITYSDK_OFFSET(0x2073F460)
#define UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x2073F2A0)
#define UNITYENGINE_TEXTURE2D_GET_LARGESTMIPLIMIT_OFFSET UNITYSDK_OFFSET(0x2073F470)
#define UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F1F0)
#define UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x2073F500)
#define UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F550)
#define UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F540)
#define UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F4E0)
#define UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F200)
#define UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F1D0)
#define UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F4C0)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0x2073F4B0)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0x2073F4A0)
#define UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F1B0)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x2073F220)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x2073F230)
#define UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0x2073F570)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x2073F400)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x2073F3F0)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET UNITYSDK_OFFSET(0x20740620)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x20740510)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET UNITYSDK_OFFSET(0x2073F670)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET UNITYSDK_OFFSET(0x2073F690)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0x2073F660)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x2073F3C0)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x2073F3B0)
#define UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET UNITYSDK_OFFSET(0x207409C0)
#define UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET UNITYSDK_OFFSET(0x20740920)
#define UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET UNITYSDK_OFFSET(0x2073F2C0)
#define UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET UNITYSDK_OFFSET(0x2073F3A0)
#define UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET UNITYSDK_OFFSET(0x207408A0)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0x20740850)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x2073F5C0)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET UNITYSDK_OFFSET(0x2073F5A0)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x2073F5D0)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET UNITYSDK_OFFSET(0x2073F5B0)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x2073F410)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x2073F420)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x2073F2E0)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x2073F2D0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_1_OFFSET UNITYSDK_OFFSET(0x20740C40)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_2_OFFSET UNITYSDK_OFFSET(0x20740C60)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_3_OFFSET UNITYSDK_OFFSET(0x20740CA0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x20740C20)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x20740CF0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET UNITYSDK_OFFSET(0x20740D00)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET UNITYSDK_OFFSET(0x20740D10)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x20740CE0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPLNATIVE_OFFSET UNITYSDK_OFFSET(0x2073F3E0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x2073F3D0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_1_OFFSET UNITYSDK_OFFSET(0x2073FEB0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_2_OFFSET UNITYSDK_OFFSET(0x2073FF40)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_3_OFFSET UNITYSDK_OFFSET(0x2073FFF0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_OFFSET UNITYSDK_OFFSET(0x2073FE20)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x20740100)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x20740180)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x20740220)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x20740080)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x2073FD80)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x2073FCF0)
#define UNITYENGINE_TEXTURE2D_SET_ALLOWGLOBALMIPBIAS_OFFSET UNITYSDK_OFFSET(0x2073F490)
#define UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x2073F510)
#define UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F4F0)
#define UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x2073F4D0)
#define UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x2073F590)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2D_TypeDefinitionIndex = 4196;

	class Texture2D : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4, ::System::Int32 a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::DefaultFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::System::Int32 a4, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Int32 a4, ::System::Boolean a5, ::System::IntPtr a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_6(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_7(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CTOR_8_OFFSET))(this, a1, a2);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET))(this);
		}

		static ::UnityEngine::Texture2D* get_whiteTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_blackTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_redTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_grayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_linearGrayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_normalTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET))();
		}

		::System::Void Compress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET))(this, a1);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a6, ::System::IntPtr a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::Experimental::Rendering::TextureCreationFlags a6, ::System::IntPtr a7)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void ApplyImpl(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Boolean ResizeImpl(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixelImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Color GetPixelImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color GetPixelBilinearImpl(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ResizeWithFormatImpl(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReadPixelsImpl(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPixelsImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color>* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetPixelsImplNative(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IntPtr a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPLNATIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean LoadRawTextureDataImpl(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET))(this, a1, a2);
		}

		::System::Boolean LoadRawTextureDataImplArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET))(this, a1);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IntPtr GetWritableImageData(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET))(this, a1);
		}

		::System::Int64 GetRawImageDataSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET))(this);
		}

		static ::System::Void GenerateAtlasImpl(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::UnityEngine::Rect>* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean get_isPreProcessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET))(this);
		}

		::System::Int32 get_largestMipLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LARGESTMIPLIMIT_OFFSET))(this);
		}

		::System::Boolean get_allowGlobalMipBias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ALLOWGLOBALMIPBIAS_OFFSET))(this);
		}

		::System::Void set_allowGlobalMipBias(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_ALLOWGLOBALMIPBIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET))(this);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 get_minimumMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_minimumMipmapLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_loadAllMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET))(this);
		}

		::System::Void set_loadAllMips(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET))(this, a1);
		}

		::System::Int32 get_calculatedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(this);
		}

		::System::Void ClearMinimumMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void UpdateExternalTexture(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetAllPixels32(::Il2CppArray<::UnityEngine::Color32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockOfPixels32(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color32>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetAllPixels32Native(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32NATIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockOfPixels32Native(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::IntPtr a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32NATIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Il2CppArray<::System::Byte>* GetRawTextureData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetPixelsNative(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::IntPtr a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean GetPixels32Native(::System::Int32 a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32_1()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures(::Il2CppArray<::UnityEngine::Texture2D*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_1(::Il2CppArray<::UnityEngine::Texture2D*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_2(::Il2CppArray<::UnityEngine::Texture2D*>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Texture2D* CreateExternalTexture(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::System::Boolean a5, ::System::IntPtr a6)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPixel(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPixel_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Color a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetPixelsNative(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPixelsNative_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetPixelsNative_2(::Unity::Collections::NativeArray_1<::UnityEngine::Color> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixelsNative_3(::Unity::Collections::NativeArray_1<::UnityEngine::Color> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_3_OFFSET))(this, a1);
		}

		::System::Void SetPixels(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPixels_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetPixels_2(::Il2CppArray<::UnityEngine::Color>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels_3(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetPixel(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetPixel_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color GetPixelBilinear(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetPixelBilinear_1(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadRawTextureData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(this, a1, a2);
		}

		::System::Void LoadRawTextureData_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET))(this, a1);
		}

		::System::Void Apply(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void Apply_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET))(this, a1);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET))(this);
		}

		::System::Boolean Resize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Resize_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReadPixels(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReadPixels_1(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean GenerateAtlas(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SetPixels32Native(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels32Native_1(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_1_OFFSET))(this, a1);
		}

		::System::Void SetPixels32Native_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPixels32Native_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(this, a1, a2);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET))(this, a1);
		}

		::System::Void SetPixels32_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color32>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPixels32_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Color32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_2(::System::Int32 a1)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_2_OFFSET))(this, a1);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_3()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_3_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_2(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_3()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color32> GetPixels32Native_1(::System::Int32 a1)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_1_OFFSET))(this, a1);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color32> GetPixels32Native_2()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_2_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetPixelBilinearImpl_Injected(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReadPixelsImpl_Injected(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
